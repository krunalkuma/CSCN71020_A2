#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter (int*, int*);
extern "C" int getArea (int*, int*);
extern "C" void  setLength (int, int*);
extern "C" void setWidth (int, int* );

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Result = 0;
			int variable1 = 10, variable2 = 20;
			Result = getPerimeter (&variable1,&variable2);
			Assert::AreEqual (60, Result);

		}
		TEST_METHOD(TestMethod2)
		{
			int Result = 0;
			int variable1 = 5, variable2 = 20;
			Result = getArea(&variable1, &variable2);
			Assert::AreEqual(100, Result);
		}
		TEST_METHOD(TestMethod3)
		{
			int length;
			setLength(10, &length);
			Assert::AreEqual (10, length );
		}
		TEST_METHOD(TestMethod4)
		{
			int length;
			setLength(55, &length);
			Assert::AreEqual(55, length);
		}
		TEST_METHOD(TestMethod5)
		{
			int length;
			setLength(12, &length);
			Assert::AreEqual(12, length);
		}
		TEST_METHOD(TestMethod6)
		{
			int width;
			setWidth (50, &width);
			Assert::AreEqual(50, width);
		}
		TEST_METHOD(TestMethod7)
		{
			int width;
			setWidth(70, &width);
			Assert::AreEqual(70, width);
		}
		TEST_METHOD(TestMethod8)
		{
			int width;
			setWidth(27, &width);
			Assert::AreEqual(27, width);
		}

	};



}

