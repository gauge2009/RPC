using System;
using System.Diagnostics;
using System.ServiceModel.Description;
using System.Text;
using System.Xml;
using System.Net;
using System.ServiceModel;
using System.ServiceModel.Channels;
namespace JrRpc.MetataRetrieval
{
    class Program
    {
        static void Main(string[] args)
        {
            MetadataExchangeClient metadataExchangeClient = new MetadataExchangeClient(new Uri("http://localhost:15601/calcservice/metadata"), MetadataExchangeClientMode.HttpGet);
            metadataExchangeClient.ResolveMetadataReferences = false;
            MetadataSet metadata = metadataExchangeClient.GetMetadata();
            using (XmlWriter writer = new XmlTextWriter("metadata.xml", Encoding.UTF8))
            {
                metadata.WriteTo(writer);
            }
            Process.Start("metadata.xml");
        }

        private static void GetMetadataViaHttpGet()
        {
            MetadataSet metadata = new MetadataSet();
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create("http://localhost:15601/calcservice/metadata");
            request.Method = "Get";
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();
            using (XmlReader reader = XmlDictionaryReader.CreateTextReader(response.GetResponseStream(), new XmlDictionaryReaderQuotas()))
            {
                System.Web.Services.Description.ServiceDescription serviceDesc = System.Web.Services.Description.ServiceDescription.Read(reader);
                metadata.MetadataSections.Add(MetadataSection.CreateFromServiceDescription(serviceDesc));
            }
            WriterMetadata(metadata);
        }

        private static void GetMetadataViaMex()
        {
            MetadataSet metadata = null;
            using (ChannelFactory<IMetadataExchange> channelFactory = 
                new ChannelFactory<IMetadataExchange>(
                MetadataExchangeBindings.CreateMexHttpBinding(),
                new EndpointAddress("http://localhost:15618/calcservice/mex")))
            {
                IMetadataExchange proxy = channelFactory.CreateChannel();
                using (proxy as IDisposable)
                {
                    Message request = Message.CreateMessage(MessageVersion.Default, "http://schemas.xmlsoap.org/ws/2004/09/transfer/Get");
                    metadata = proxy.Get(request).GetBody<MetadataSet>();
                }
            }
            WriterMetadata(metadata);
        }

        private static void WriterMetadata(MetadataSet metadata)
        {
            using (XmlWriter writer = new XmlTextWriter("metadata.xml", Encoding.UTF8))
            {
                metadata.WriteTo(writer);
            }
            Process.Start("metadata.xml");
        }
    }
}

