using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ServiceModel;

namespace JrRpc.MetataRetrieval.Services
{
    class Program
    {
        static void Main(string[] args)
        {
            using (ServiceHost host = new ServiceHost(typeof(CalcService)))
            {
                host.Open();
                Console.WriteLine("Host is Openn!");
                Console.Read();
            }
        }
    }
}
