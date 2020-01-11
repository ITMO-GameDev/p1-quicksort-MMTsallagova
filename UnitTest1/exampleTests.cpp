#include "stdafx.h"
//#include "CppUnitTest.h"
//#include <tuple>
//#include <algorithm>
//#include <chrono> 
//#include "../Sort/Sort.h"
//
//using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//
//namespace Tests
//{
//	TEST_CLASS(UnitTests)
//	{
//	public:
//
//		TEST_METHOD(NEWTestSwap)
//		{
//			int a[3] = { 1, 2, 3 };
//			swap(a, a + 1);
//			Assert::AreEqual(a[0], 2);
//			Assert::AreEqual(a[1], 1);
//		}
//
//		TEST_METHOD(NEWInsertionSort_SingleElement)
//		{
//			int a[] = { 1 };
//			insertion_sort(a, a, [](int a, int b) { return a < b; });
//			//sort(a, a, [](int a, int b) { return a < b; });
//			Assert::AreEqual(a[0], 1);
//		}
//
//		TEST_METHOD(NEWInsertionSort_10Element)
//		{
//			const int length = 3;
//			/*int arrayTest[length] = { 3,2,1 };
//			int idealArray[length] = { 1,2,3 };*/
//			//auto lambda = [](int a, int b) { return a > b; };
//			
//			int* arrayTest = new int[length];
//			int* idealArray = new int[length];
//			
//			for (int i = 0; i < length; i++) {
//				int randInt = rand() % 10;
//				arrayTest[i] = randInt;
//				idealArray[i] = randInt;
//			}
//			std::sort(idealArray, idealArray + length);
//
//
//			//sort(arrayTest, arrayTest + length - 1, [](int a, int b) { return a > b; });
//			insertion_sort(arrayTest, arrayTest + length, [](int a, int b) { return a > b; });
//			
//			for (int i = 0; i <= length; i++)
//			{ 
//				Assert::AreEqual(*(idealArray+i), *(arrayTest +i));
//				//Assert::AreEqual(*(arrFirst + index), *(arrSecond + index));
//			}
//
//			
//
//		}
//	};
//}