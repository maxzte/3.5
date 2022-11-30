#include "pch.h"
#include "CppUnitTest.h"
#include<iostream>
#include "../3.5/3.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(calculate_test)
	{
	public:
		TEST_METHOD(calculate_get1and2_0returned)
		{
			int x = -2, n = 1, a = -1, b = 1, h = 1;
			int expected = 0;
			int actual = calculate(n, x, a, b, h);
			Assert::AreEqual(expected, actual);
		}

	public:
		TEST_METHOD(calculate2_get1and2_1returned)
		{
			int x = 1, n = 2, a = 1, b = 2, h = 1;
			int expected = 2;
			int actual = calculate2(n, x, a, b, h);
			Assert::AreEqual(expected, actual);
		}

	public:
		TEST_METHOD(CheckValidParams_get2_exceptionThrown)
		{
			int n = 0;
			try
			{
				CheckValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
		public:
			TEST_METHOD(CheckStep_get0)
			{
				int h = 0;
				try
				{
					CheckStep(h);
					Assert::Fail();
				}
				catch (...)
				{
					Assert::IsTrue(true);
				}
		}
	};
}

