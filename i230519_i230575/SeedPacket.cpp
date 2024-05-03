#include"SeedPacket.h"

Plant** SeedPacket::getPlantSeed() {
	return plant;
}
int SeedPacket::getNumberOfPlants() {
	return numberOfPlants;
}
bool SeedPacket::loadingOfPlant() {
	return true;
}
void SeedPacket::makeSeedPacket(RenderWindow& window) {
	Image seedPacket_image;
	seedPacket_image.loadFromFile("assets/Inventory-GameScreen/ChooserBackground.png");
	Texture seedPacket;
	seedPacket.loadFromImage(seedPacket_image);
	s_seedPacket.setTexture(seedPacket);
	s_seedPacket.setPosition(10, 0);
	window.draw(s_seedPacket);

}
Point* SeedPacket::getCoordinates() {
	return coordinates;
}
bool* SeedPacket::getChecker() {
	return checker;
}