#include "Home.h"

Home::Home() :grid(NULL)
{
	//Creating the grid 5x9 each grid cell will have its x y dimension

	grid = new Point * [rows];
	for (int i = 0; i < rows; i++)
	{
		grid[i] = new Point[columns];
	}
	
	for (int i = 0;i < rows;i++) {
		
		for (int j = 0;j < columns;j++) {
			grid[i][j].x = 260 + j * 80;
			grid[i][j].y = 90 + i * 90;
		}
	}
	
	//Creating 2d array to check wheter the cell is free or not
	fieldGameStatus = new bool* [rows];
	for (int i = 0; i < rows; i++)
	{
		fieldGameStatus[i] = new bool[columns];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			fieldGameStatus[i][j] = true;
		}
	}



}

//Home::Home(Point** grid)
//{
//	//Creating the grid 5x9 each grid cell will have its x y dimension
//
//	grid = new Point * [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		grid[i] = new Point[columns];
//	}
//	//Creating 2d array to check wheter the cell is free or not
//	fieldGameStatus = new bool* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		fieldGameStatus[i] = new bool[columns];
//	}
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < columns; j++) {
//			fieldGameStatus[i][j] = true;
//		}
//	}
//
//}

bool Home::getFieldGameStatus(int row, int column)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i == row && j == column)
				return fieldGameStatus[i][j];
		}
	}
}

void Home::setGrid(Point** grid)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			this->grid[i][j] = grid[i][j];
		}
	}

}
Point**Home:: getGrid() {
	return grid;
}
