#include "pch.h"
#include "CppUnitTest.h"
#include "../kod morse'a/kod morse'a.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestKodera
{
	TEST_CLASS(TestKodera)
	{
	public:
		
		TEST_METHOD(TestKodowanie1)
		{
			charToMorse;

			string expected = "-----";
			string actual = charToMorse(0);

			expected == actual;
		}
		
		TEST_METHOD(TestKodowanie2)
		{
			charToMorse;

			string expected = ".....";
			string actual = charToMorse(5);

			expected == actual;
		}

		TEST_METHOD(TestKodowanie3)
		{
			charToMorse;

			string expected = ".---- -----";
			string actual = charToMorse(10);

			expected == actual;
		}
		
		TEST_METHOD(TestKodowanie4)
		{
			charToMorse;

			string expected = ".---- ----. ----. .....";
			string actual = charToMorse(1995);

			expected == actual;
		}

		TEST_METHOD(TestKodowanie5)
		{
			charToMorse;

			string expected = ".---- ..--- ...-- ....- ..... -.... --... ---.. ----. -----";
			string actual = charToMorse(1234567890);

			expected == actual;
		}
	};
}
