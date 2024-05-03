#pragma once
#include"Point.h"
#include"Plant.h"
#include <SFML/Graphics.hpp>
using namespace sf;
class MouseInteraction {
private:
	Point coordinates;
public:
	MouseInteraction():coordinates(0,0){}
	MouseInteraction(Point coordinates):coordinates(coordinates){}
	Point getCoordinates();
	Plant* selection(Event&,Plant**,int numberOfPlants);
};