#pragma once
#include"Plant.h"
#include"Point.h"
#include <SFML/Graphics.hpp>
using namespace sf;
//#include"Mushroom.h"
class Inventory {
private:
	Plant** plant;
	int numberOfPlants;
	Point** inventory;
	bool** inventoryStatus;
	Sprite s_inventory;
	//TorchWood* torchwood;
	//Shovel* shovel;
public:
	Inventory():plant(nullptr),numberOfPlants(0)/*, mushroom(nullptr), torchwood(torchwood), shovel(nullptr)*/,inventory(nullptr),inventoryStatus(nullptr) {
		inventory = new Point * [8];
		for (int i = 0;i < 8;i++) {
			inventory[i] = new Point[5];
		}
		for (int i = 0;i < 8;i++) {
			for (int j = 0;j < 5;j++) {
				inventory[i][j].x = 10 + i* 60;
				inventory[i][j].y = 125 + j* 75;
			}
		}
		inventoryStatus = new bool* [8];
		for (int i = 0; i < 8; i++)
		{
			inventoryStatus[i] = new bool[5];
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 5; j++) {
				inventoryStatus[i][j] = true;
			}
		}
	}
	Inventory(Plant**plant,int numberOfPlants/*Mushroom* mushroom TorchWood* torchwood, Shovel* shovel*/) :plant(plant), numberOfPlants(numberOfPlants)/*, mushroom(mushroom), torchwood(torchwood), shovel(shovel)*/ {
		inventory = new Point* [8];
		for (int i = 0;i < 8;i++) {
			inventory[i] = new Point[5];
		}
		for (int i = 0;i < 8;i++) {
			for (int j = 0;j < 5;j++) {
				inventory[i][j].x = 125 + i * 75;
				inventory[i][j].y = 20 + j * 45;
			}
		}
		inventoryStatus = new bool* [8];
		for (int i = 0; i < 8; i++)
		{
			inventoryStatus[i] = new bool[5];
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 5; j++) {
				inventoryStatus[i][j] = true;
			}
		}
		
		
	}
	void showInventory(RenderWindow& window) {
		Image inventory_image;
		inventory_image.loadFromFile("assets/Inventory-GameScreen/PanelBackground.png");
		Texture inventory;
		inventory.loadFromImage(inventory_image);
		s_inventory.setTexture(inventory);
		s_inventory.setPosition(0, 100);
		window.draw(s_inventory);

	}
	void addSeed(Plant*);
	Plant** getPlantPointer();
	int getNumberOfPlants();
	Point** getInventoryCoordinates();
	bool** getStatus();

};
