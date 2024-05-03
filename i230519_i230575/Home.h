#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class Home
{
protected:
	Point** grid;
	bool** fieldGameStatus;
	const int rows = 5;
	const int columns = 10;
public:
	//Constructors
	Home();
	//Home(Point** grid);
	//Getters
	bool getFieldGameStatus(int row, int column);
	//Setters
	void setGrid(Point** grid);
	//Getters
	Point** getGrid();
};


