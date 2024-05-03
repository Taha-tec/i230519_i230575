#pragma once
#include"Inventory.h"
#include"MouseInteraction.h"
#include"SeedPacket.h"
#include <SFML/Graphics.hpp>
using namespace sf;	
class Player {
private:
	MouseInteraction mouseInteraction;
	Inventory inventory;
	SeedPacket seedpacket;
	int currentLevel;
public:
	Player():inventory(),seedpacket(),currentLevel(1){}
	Player(Inventory inventory,SeedPacket seedpacket):inventory(inventory),seedpacket(seedpacket),currentLevel(1){}
	void plantSelectionFromInventoryToSeedPacket(RenderWindow& window,Event&);
	bool playerLooseAndWin();
	int getCurrentLevel();
	Inventory getInventory();
	SeedPacket getSeedPacket();
};
