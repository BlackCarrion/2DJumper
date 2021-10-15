#include "GameObject.h"

#pragma once
class Player : GameObject
{
private:
	int _life;
	int _strength;
	int _row;
	int _col;

	void hit(int type);
	void move(int xPositin, int yPosition);

public:
	Player();
	~Player();

	int getLife();
	void setLife(int life);

	int getStrength();
	void setStrength(int strength);

	int getRow();
	void setRow(int row);

	int getCol();
	void setCol(int col);	
};