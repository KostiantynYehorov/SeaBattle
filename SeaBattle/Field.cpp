#include "Field.h"

Field::Field()
{
	pField_Player1 = new char* [FieldSize];
	pField_Player2 = new char* [FieldSize];

	for (int i = 0; i < FieldSize; ++i) 
	{ 
		pField_Player1[i] = new char[FieldSize]; 
		pField_Player2[i] = new char[FieldSize];
	}

	for (int i = 0; i < FieldSize; i++)
	{
		for (int j = 0; j < FieldSize; j++)
		{
			pField_Player1[i][j] = '~';
			pField_Player2[i][j] = '~';
		}
	}
}

Field::~Field()
{
	for (int i = 0; i < FieldSize; ++i) { delete[] pField_Player1[i], pField_Player2[i]; }
	delete[] pField_Player1, pField_Player2;
}

void Field::FieldsOutput()
{
	for (int i = 0; i < FieldSize; i++)
	{
		for (int j = 0; j < FieldSize; j++)
		{
			std::cout << pField_Player1[i][j] << " ";
		}

		std::cout << "\t\t";

		for (int j = 0; j < FieldSize; j++)
		{
			std::cout << pField_Player2[i][j] << " ";
		}

		std::cout << "\n";
	}
}
