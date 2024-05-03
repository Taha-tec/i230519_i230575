#include"MouseInteraction.h"
Point MouseInteraction::getCoordinates() {
	return coordinates;
}
Plant* MouseInteraction::selection(Event&event,Plant** plant,int numberOfPlants) {
	if (event.type == Event::MouseButtonPressed) {
		if (event.mouseButton.button == Mouse::Left) {
			for (int i = 0;i < numberOfPlants;i++) {
				if (event.mouseButton.x == plant[i]->getCard().getPosition().x && event.mouseButton.y == plant[i]->getCard().getPosition().y)
					return plant[i];
			}
		}
	}
	selection(event, plant ,numberOfPlants);
	return nullptr;
}