#include "stdafx.h"
//#include "CppUnitTest.h"
//#include <tuple>
//#include <algorithm>
//#include <chrono> 
//#include "../Sort/QuickSort.h"
//
//using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//
//template < typename T >
//void ArrayEquals(T* arrFirst, T* arrSecond, int size) {
//	int index = 0;
//	while (index < size)
//	{
//		Assert::AreEqual(*(arrFirst + index), *(arrSecond + index));
//		++index;
//	}
//}
//
//std::tuple<int*, int*, int*> RandomArray(int length) {
//	int* arr = new int[length];
//	int* sortedArr = new int[length];
//	for (int i = 0; i < length; i++) {
//		int randInt = rand() % 10000;
//		arr[i] = randInt;
//		sortedArr[i] = randInt;
//	}
//	std::sort(sortedArr, sortedArr + length);
//	return{ arr, arr + length - 1, sortedArr };
//}
//
//namespace Tests
//{
//	TEST_CLASS(Tests)
//	{
//	public:
//
//		TEST_METHOD(TestSwap)
//		{
//			int a[3] = { 1, 2, 3 };
//			swap(a, a + 1);
//			Assert::AreEqual(a[0], 2);
//			Assert::AreEqual(a[1], 1);
//		}
//
//
//		TEST_METHOD(SingleElement)
//		{
//			int a[] = { 1 };
//			insertion_sort(a, a, [](int a, int b) { return a < b; });
//			Assert::AreEqual(a[0], 1);
//		}
//
//		TEST_METHOD(InsertionSort_20Element)
//		{
//			int length = 20;
//			int* first;
//			int* last;
//			int* sortedFirst;
//			std::tie(first, last, sortedFirst) = RandomArray(length);
//			
//			insertion_sort(first, last, [](int a, int b) { return a < b; });
//			for (int j = 0; j < length; j++) {
//				Assert::AreEqual(*(sortedFirst + j), *(first + j));
//			};
//			//ArrayEquals(first, sortedFirst, length);
//			/*delete[] first;
//			delete[] sortedFirst;*/
//		}
//
//
//		TEST_METHOD(InsertionSort_100Element)
//		{
//			int length = 100;
//			int* first;
//			int* last;
//			int* sortedFirst;
//			std::tie(first, last, sortedFirst) = RandomArray(length);
//			insertion_sort(first, last, [](int a, int b) { return a < b; });
//			ArrayEquals(first, sortedFirst, length);
//			delete[] first;
//			delete[] sortedFirst;
//		}
//
//
//		TEST_METHOD(InsertionSort_1000Element)
//		{
//			int length = 1000;
//			int* first;
//			int* last;
//			int* sortedFirst;
//			std::tie(first, last, sortedFirst) = RandomArray(length);
//			insertion_sort(first, last, [](int a, int b) { return a < b; });
//			ArrayEquals(first, sortedFirst, length);
//			delete[] first;
//			delete[] sortedFirst;
//		}
//
//
//		TEST_METHOD(QuickSort_20Element)
//		{
//			int length = 20;
//			int* first;
//			int* last;
//			int* sortedFirst;
//			std::tie(first, last, sortedFirst) = RandomArray(length);
//			sort(first, last, [](int a, int b) { return a < b; });
//			ArrayEquals(first, sortedFirst, length);
//			delete[] first;
//			delete[] sortedFirst;
//		}
//
//
//		TEST_METHOD(QuickSort_100Element)
//		{
//			int length = 50;
//			int* first;
//			int* last;
//			int* sortedFirst;
//			std::tie(first, last, sortedFirst) = RandomArray(length);
//			sort(first, last, [](int a, int b) { return a < b; });
//			ArrayEquals(first, sortedFirst, length);
//			delete[] first;
//			delete[] sortedFirst;
//		}
//
//	};
//}
//
//
////#include "stdafx.h"
////#include "CppUnitTest.h"
////#include "..\Sort\Sort.h"
////
////using namespace Microsoft::VisualStudio::CppUnitTestFramework;
////
////namespace UnitTest1
////{		
////	TEST_CLASS(UnitTest1)
////	{
////	public:
////		
////		TEST_METHOD(TestMethod1)
////		{
////			const int length = 10;
////			int arrayTest[length] = { 9,8,7,6,5,4,3,2,1,0 };
////			int resultArray[length] = { 0,1,2,3,4,5,6,7,8,9 };
////			auto lambda = [](int a, int b) { return a > b; };
////
////			sort(arrayTest, arrayTest + length - 1, lambda);
////
////			for (int i = 0; i < length; i++)
////			{
////				Assert::AreEqual(arrayTest[i], resultArray[i]);
////			}
////		}
////
////	};
////}