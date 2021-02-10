#pragma once
#include <iostream>
class Field
{
public:
	Field();
	~Field();

	void FieldOutput();
protected:
	char** pField;
	const int FieldSize = 10;

	int _4_cells_ship, _3_cells_ship, _2_cells_ship, _1_cell_ship;
};

