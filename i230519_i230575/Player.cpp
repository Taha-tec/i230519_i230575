#include"Player.h"

void Player::plantSelectionFromInventoryToSeedPacket(RenderWindow& window,Event& event) {
	inventory.showInventory(window);
	seedpacket.makeSeedPacket(window);

	Plant* temp=mouseInteraction.selection(event, inventory.getPlantPointer(), inventory.getNumberOfPlants());

	if (temp != nullptr) {
		for (int i = 0;i < 6;i++) {
			if (seedpacket.getChecker()[i] == true) {
				temp->getCard().setPosition(seedpacket.getCoordinates()[i].x, seedpacket.getCoordinates()[i].y);
				break;
			}
		}
	}
}
bool Player::playerLooseAndWin() {
	return true;
}
int Player::getCurrentLevel() {
	return currentLevel;
}
Inventory Player::getInventory() {
	return inventory;
}
SeedPacket Player::getSeedPacket() {
	return seedpacket;
}