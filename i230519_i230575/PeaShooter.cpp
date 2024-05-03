#include"PeaShooter.h"
void PeaShooter::makecard(RenderWindow& window, Point** grid, bool** checker) {
	bool match = false;
	for (int i = 0;i < 8;i++) {
		for (int j = 0;j < 5;j++) {
			if (checker[i][j] == true) {
				Image c;
				c.loadFromFile("assets/Inventory-GameScreen/Cards/card_cherrybomb.png");
				Texture c_t;
				c_t.loadFromImage(c);

				s_peaShooterCard.setTexture(c_t);
				s_peaShooterCard.setPosition(grid[i][j].x, grid[i][j].y);
				window.draw(s_peaShooterCard);
				match = true;
				break;
			}

		}
		if (match) {
			break;
		}
	}
}
Sprite& PeaShooter::getCard() {
	return s_peaShooterCard;

}