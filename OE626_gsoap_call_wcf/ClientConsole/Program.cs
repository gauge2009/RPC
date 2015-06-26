using ClientConsole.ServiceReference;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClientConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            using (var proxy = new CalcClient())
            {
                Console.WriteLine(proxy.Add(11, 22));
            }
        }
    }
}
