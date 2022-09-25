using System;
using System.Linq;

namespace LabAct4DataTypeVariable
{
	public static class Program
	{
		public static void Main()
		{
			double investAmount = 0;
			double input1stinterest =0;
			double input2ndinterest =0;
		  double fYrinterest, sYrinterest, resultFrstYr, resultScndYr, totalinterest;

			
			Console.Write("Investment:");
			investAmount = double.Parse(Console.ReadLine());
			Console.Write("Percentage First Year interest:");
			input1stinterest = double.Parse(Console.ReadLine());
			Console.Write("Percentage Second Year interest:");
			input2ndinterest = double.Parse(Console.ReadLine());
			
			
			fYrinterest = input1stinterest / 100;
			sYrinterest = input2ndinterest / 100;
			totalinterest = fYrinterest + sYrinterest;

			resultFrstYr = fYrinterest * investAmount;
			resultScndYr = sYrinterest * (investAmount + resultFrstYr);


			Console.WriteLine("First Year interest Earned:{0}" , resultFrstYr);
			Console.WriteLine("Second Year interest Earned:{0}", resultScndYr);
			Console.WriteLine("Total interest earned in two years:{0}",totalinterest);
			Console.ReadKey();

		}
	}
}
