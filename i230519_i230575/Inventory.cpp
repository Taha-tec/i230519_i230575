#include"Inventory.h"

void Inventory::addSeed(Plant* plant) {
	Plant** temp = this->plant;
	this->plant = new Plant * [numberOfPlants + 1];
	for (int i = 0;i < numberOfPlants;i++) {
		this->plant[i] = temp[i];
	}
	this->plant[numberOfPlants] = plant;

}
Plant** Inventory::getPlantPointer() {
	return plant;
}
int Inventory::getNumberOfPlants() {
	return numberOfPlants;
}
Point** Inventory::getInventoryCoordinates() {
	return inventory;
}
bool** Inventory::getStatus() {
	return inventoryStatus;
}
