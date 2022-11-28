#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\Project1\Project1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(print_Test1)
	{
	public:
		TEST_METHOD(print_get6and1700returned)
		{
			int n = 6;
			int x = 1;
			int expected = 1700;
			int actual = print(n, x);
			Assert::AreEqual(expected, actual);
		}
	public:
		TEST_METHOD(print_get5andminus10and56returned)
		{
			int n = 5;
			int x = -10;
			int expected = 56;
			int actual = print(n, x);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(print_get6and100000returned)
		{
			int n = 6;
			int x = 1;
			int expected = 1000000;
			int actual = print(n, x);
			Assert::AreEqual(expected, actual);
		}
	};
}
