#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.1/LR5.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = g(3, 8);
			Assert::AreEqual(t, 2);
		}
	};
}
