#pragma once
class I2C
{
public:
	I2C();
	~I2C();
	int getAddress();
	int write(int address, const char *data, int length, bool repeated = false);
};

