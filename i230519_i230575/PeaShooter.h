#pragma once
#include"Plant.h"
#include <SFML/Graphics.hpp>
using namespace sf;
class PeaShooter :public Plant {
private:
	Sprite s_peaShooter;
	Sprite s_peaShooterCard;

public:
	PeaShooter(){}
	void makecard(RenderWindow& window, Point** grid, bool** checker);
	Sprite& getCard();

};