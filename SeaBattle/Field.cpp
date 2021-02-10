#include "Field.h"

Field::Field()
{
	_4_cells_ship = 1, _3_cells_ship = 2, _2_cells_ship = 3, _1_cell_ship = 4;
	pField = new char* [FieldSize];
	pField = new char* [FieldSize];

	for (int i = 0; i < FieldSize; ++i) 
	{ 
		pField[i] = new char[FieldSize];
		pField[i] = new char[FieldSize];
	}

	for (int i = 0; i < FieldSize; i++)
	{
		for (int j = 0; j < FieldSize; j++)
		{
			pField[i][j] = '~';
		}
	}

}

Field::~Field()
{
	for (int i = 0; i < FieldSize; ++i) { delete[] pField[i]; }
	delete[] pField;
}

void Field::FieldOutput()
{
	for (int i = 0; i < FieldSize; i++)
	{
		for (int j = 0; j < FieldSize; j++) { std::cout << pField[i][j] << " "; }
		std::cout << "\n";
	}
}
