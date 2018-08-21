#include "stdafx.h"
#include "CppUnitTest.h"
#include "I2C.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace I2CTests
{		
	TEST_CLASS(I2C_Stub)
	{
	public:
		
		TEST_METHOD(Address)
		{
			I2C i2c;
			char data[2] = { 0xFF, 0xFF };
			/*modyfikacja*/
			i2c.write(0x48, data, 2, true);
			Assert::AreEqual(0x48, i2c.getAddress());
		}

	};
}