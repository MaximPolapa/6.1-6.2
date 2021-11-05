#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[4] = { 1,2,3,4 };
			int S = Sum(A, 4,0);
			Assert::AreEqual(S, 9);
		}
	};
}
