#pragma once
#include"Plant.h"
#include"Point.h"
#include <SFML/Graphics.hpp>
using namespace sf;
class SeedPacket {
private:
	Plant** plant;
	int numberOfPlants;
	Sprite s_seedPacket;
	Point* coordinates;
	bool* checker;
public:
	SeedPacket():plant(nullptr),numberOfPlants(0),coordinates(new Point[6]),checker(new bool[6]) {
		for (int i = 0;i < 6;i++) {
			coordinates[i].x = 80 + 1* 65;
			coordinates[i].y = 0;
		}
		for (int i = 0;i < 6;i++) {
			checker[i] = true;
		}
	}
	SeedPacket(Plant**plant,int numberOfPlants):plant(plant),numberOfPlants(numberOfPlants),coordinates(new Point[6]), checker(new bool[6]) {
		for (int i = 0;i < 6;i++) {
			coordinates[i].x = 30 + i * 75;
			coordinates[i].y = 0;
		}
		for (int i = 0;i < 6;i++) {
			checker[i] = true;
		}
	}
	Plant** getPlantSeed();
	int getNumberOfPlants();
	bool loadingOfPlant();
	void makeSeedPacket(RenderWindow&);
	bool* getChecker();
	Point* getCoordinates();
};