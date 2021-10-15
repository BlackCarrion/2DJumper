/*
*************************************************
*** Координатами объекта считаются координаты ***
*** левого верхнего элемента объекта,		  ***
***	представленного в двумерном				  ***
*** массиве.								  ***
*************************************************
*/
#include <iostream>

#pragma once
class GameObject
{
private:
	int _rows;
	int _cols;
	int x;
	int y;
	char** _field;
	const char _bound = '#';
	const char _empty = ' ';
	const char _platform = '=';
	const char _player = '@';



public:
	enum Type { BOUND, EMPTY, PLATFORM, PLAYER };
	GameObject();
	GameObject(int row, int col, Type type, GameObject& game);
	~GameObject();

	int getRows();
	void setRows(int amount);
	int getCols();
	void setCols(int amount);


	char typeToChar(Type type);
	void bounder(GameObject& game);
	void emptying();
	void createPlatform(int row, int col, GameObject& game);
	void createField();
	void print();
};