#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/5/lab_5.1G/lab_5.1G/Object.cpp"
#include "../../../../../політех/ооп/5/lab_5.1G/lab_5.1G/Triad.cpp"
#include "../../../../../політех/ооп/5/lab_5.1G/lab_5.1G/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date a(11, 12, 13);
			Assert::AreEqual(11.0, a.getFirst());
		}
	};
}
