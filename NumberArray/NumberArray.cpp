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