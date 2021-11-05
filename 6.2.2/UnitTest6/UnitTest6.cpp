#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			{
				int A[4] = { 1,2,3,4 };
				int S = Sum(A, 4);
				Assert::AreEqual(S, 4);
			}
		}
	};
}
