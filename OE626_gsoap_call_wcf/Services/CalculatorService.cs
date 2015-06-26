using System;
using System.ServiceModel;
namespace JrRpc.MetataRetrieval.Services
{
    [ServiceContract(Namespace = "http://o2.jrrpc.com/")]
    public interface ICalc
    {
        [OperationContract]
        double Add(double x, double y);
    }

    public class CalcService : ICalc
    {
        #region ICalculator Members

        public double Add(double x, double y)
        {

            double sum = x+y;
            Console.WriteLine(string.Format("sum={0}", sum));
            return sum;
        }

        #endregion
    }
}
