#include "Player.h"

Player::Player()
{
	_life = 1;
	_strength = 1;
	_row = 5;  // ещё не знаю позицию
	_col = 10; // ещё не знаю позицию
	std::cout << "constr";
}

Player::~Player()
{
	std::cout << "destr";
}

int Player::getLife()
{
	return _life;
}

void Player::setLife(int life)
{
	_life = life;
}

int Player::getStrength()
{
	return _strength;
}

void Player::setStrength(int strength)
{
	_strength = strength;
}

int Player::getRow()
{
	return _row;
}

void Player::setRow(int row)
{
	_row = row;
}

int Player::getCol()
{
	return _col;
}

void Player::setCol(int col)
{
	_col = col;
}


void Player::hit(int type)
{
	setLife((getLife() - type));
}
