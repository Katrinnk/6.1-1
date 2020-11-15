#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			const int n = 5;
			int a[n] = {1,2,3,4,5};
			z = Sum(a,n);
			Assert::AreEqual(z, 6);
		}
	};
}
