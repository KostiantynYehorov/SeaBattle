#pragma once
#include <iostream>
class Field
{
public:
	Field();
	~Field();

	void FieldsOutput();
private:
	char** pField_Player1;
	char** pField_Player2;
	const int FieldSize = 10;
};

