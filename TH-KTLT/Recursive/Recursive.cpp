//#include"Recursive.h"
//int sum1A(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n + sum1A(n - 1);
//}
//long float sum1B(int n)
//{
//	if (n == 1)
//	{
//		return sqrt(5);
//	}
//	return sqrt(5 + sum1B(n - 1));
//	/*float sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sqrt(5 + sum);
//	}
//	return sum;*/
//}
//long float sum1C(int n)
//{
//	if (n == 1)
//	{
//		return (float)1 / 2;
//	}
//	return (float)n / (n + 1) + sum1C(n - 1);
//}
//long float sum1D(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return (float)1 / (2 * n + 1) + sum1D(n - 1);
//}
//long int sum1E(int n)
//{
//	if (n == 1)
//	{
//		return 2;
//	}
//	return n * (n + 1) + sum1E(n - 1);
//}
