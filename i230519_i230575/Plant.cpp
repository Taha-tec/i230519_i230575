#include"Plant.h"

int Plant::getCostOfPlant() {
	return costOfPlant;
}
//void Plant::setWaitingInterval(Time* waitinginterval) {
//	this->waitingInterval = waitinginterval;
//}
void Plant::setCoordinate(Point coordinates) {
	this->coordinates = coordinates;
}
Point Plant::getCoordinates() {
	return coordinates;
}

