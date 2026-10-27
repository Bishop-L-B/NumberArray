/*
Bishop Brandstetter
CSC222
Number Array class
*/

#include "NumberArray.h"
#include <iostream>


NumberArray::NumberArray(int arraySize)
{
	if (arraySize <= 0)
	{
		arraySize = MAX_SIZE;
	}

	size = arraySize;
	data = new double[size];

	for (int i = 0; i < size; i++)
	{
		data[i] = 0.0;
	}


}

NumberArray::~NumberArray()
{
	delete[] data;
	std::cout << "NumberArray destructor called. Memory released. \n";
}

void NumberArray::setNumber(int index, double value)
{
	if (index >= 0 && index < size)
	{
		data[index] = value;
	}
}
double NumberArray::getNumber(int index) const
{
	static const double SAFE_DEFAULT = 0.0;

	if (index >= 0 && index < size)
	{
		return data[index];
	}
	return SAFE_DEFAULT;
}