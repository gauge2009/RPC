using System;
using System.ServiceModel;
namespace Artech.MetataRetrieval.Services
{
    [ServiceContract(Namespace="http://www.artech.com/")]
    public interface ICalculator
    {
        [OperationContract]
        double Add(double x, double y);
    }

    public class CalculatorService : ICalculator
    {
        #region ICalculator Members

        public double Add(double x, double y)
        {
            throw new NotImplementedException();
        }

        #endregion
    }
}
