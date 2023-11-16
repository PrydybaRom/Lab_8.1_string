#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			const int arraySize = 101;
			char str[arraySize]{ "++fw++fw++-=" };


			int pCount = countSymbolsPlus(str);

			Assert::AreEqual(pCount, 6);

		}
	};
}
