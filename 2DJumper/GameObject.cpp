#include <stdio.h>
#include "GameObject.h"


GameObject::GameObject() 
{
	_rows = 10;
	_cols = 60;
	createField();
}

GameObject::GameObject(int rows, int cols, Type type, GameObject& field)
{
	switch (type) 
	{
	case BOUND:
		bounder(field);
		break;
	case EMPTY:
		emptying();
		break;
	case PLATFORM:
		createPlatform(rows, (cols - 1), field);
		break;
	case PLAYER:
		_field[rows][cols] = _player;
		break;
	}
}

GameObject::~GameObject()
{
	for (int i = 0; i < _rows; i++)
	{
		delete[] _field[i];
	}
	delete[] _field;
}

int GameObject::getRows()
{
	return _rows;
}

void GameObject::setRows(int amount)
{
	_rows = amount;
}

int GameObject::getCols()
{
	return _cols;
}

void GameObject::setCols(int amount)
{
	_cols = amount;
}

char GameObject::typeToChar(Type type)
{
	switch (type)
	{
	case BOUND:
		return '#';
	case EMPTY:
		return ' ';
	case PLATFORM:
		return '=';
	case PLAYER:
		return '@';
	}
}

void GameObject::emptying()
{
	for (int i = 0; i < _rows; i++)
	{
		for (int j = 0; j < _cols; j++)
		{
			_field[i][j] = _empty;
		}
	}
}

void GameObject::createPlatform(int row, int col, GameObject& game)
{

}

void GameObject::print()
{
	for (int i = 0; i < _rows; i++)
	{
		for (int j = 0; j < _cols; j++)
		{
			std::cout << _field[i][j];
		}
		std::cout << std::endl;
	}
}

void GameObject::bounder(GameObject& game)		// раскидать на ф-цию с аргументом строка/столбец
{
	for (int i = 0; i < game.getRows(); i++)
	{
		_field[i][0] = _bound;
		_field[i][(_cols - 1)] = _bound;
	}

	for (int j = 0; j< game.getCols(); j++) 
	{
		_field[0][j] = _bound;
		_field[(_rows - 1)][j] = _bound;
	}
}

void GameObject::createField()
{
	_field = new char* [_rows];
	for (int i = 0; i < _rows; i++)
	{
		_field[i] = new char[_cols];
	}
}
