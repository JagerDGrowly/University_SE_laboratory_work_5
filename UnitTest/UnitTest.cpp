#include "pch.h"
#include "CppUnitTest.h"
#include "C:\laboratory_work_5\Lab5\Lab5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(TestMethod1_checkValidParamN)
		{
			int n = -1;

			try
			{
				checkValidParamN(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	public:
		TEST_METHOD(TestMethod2_calculateFunctionY)
		{
			int a = -5;
			int n = 2;
			int expectedX = -5;
			int expectedY = 20;
			int y = functionY(a, n);

			Assert::AreEqual(expectedX, a);
			Assert::AreEqual(expectedY, y);
		}
	};
}
