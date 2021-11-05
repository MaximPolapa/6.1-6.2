#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[4] = { 1,2,3,4 };
			int S = Sum(A, 4);
			Assert::AreEqual(S,9);
		}
	};
}
