﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 5.1/Laba 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(2, 3, 3);
			Assert::AreEqual(t, 0);

		}
	};
}
