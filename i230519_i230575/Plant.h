#pragma once
#include"Point.h"
#include"Time.h"
#include <SFML/Graphics.hpp>
using namespace sf;
class Plant {
protected:
	int costOfPlant;
	Point coordinates;
	//Time* waitingInterval;
public:
	Plant():costOfPlant(0),coordinates(0,0)/*waitingInterval(nullptr)*/ {}
	Plant(Point coordinates, int costOfPlant/*, Time* waitingInterval*/) :costOfPlant(costOfPlant), coordinates(coordinates) {}
	int getCostOfPlant();
	//void setWaitingInterval(Time*);
	void setCoordinate(Point coordinates);
	Point getCoordinates();
	virtual void makecard(RenderWindow& window, Point** grid, bool** checker1) = 0;
	virtual Sprite& getCard() = 0;

};