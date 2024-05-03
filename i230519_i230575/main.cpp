#include <SFML/Graphics.hpp>
#include"Inventory.h"
#include"Player.h"
#include"PeaShooter.h"

#include <ctime>
#include"Home.h"
using namespace sf;
using namespace std;




//Drawing the background
void createBack(RenderWindow& window) {
	//Drawing the background
	
	Image map_image;
	map_image.loadFromFile("assets/Background/bgday.jpg");
	Texture map;
	map.loadFromImage(map_image);
	Sprite s_map;
	s_map.setTexture(map);
	s_map.setPosition(0, 0);
	window.draw(s_map);
	
	
}

//Drawing the map
//void createMap(RenderWindow& window) {
//	//Drawing a map
//	Image map_image;//объект изображения для карты
//	map_image.loadFromFile("Images/grid.png");//load the file for the map
//	Texture map;
//	map.loadFromImage(map_image);
//	Sprite s_map;
//	s_map.setTexture(map);
//	s_map.setPosition(300, 160);
//
//	window.draw(s_map);
//}


int main()
{
	//Create a window, n*n
	RenderWindow window(VideoMode(1200, 700), "Plants Vs Zombies");
	//window.setSize(Vector2u(1280, 1280));
	//Game icon
	Image icon;
	if (!icon.loadFromFile("Images/icon.png"))
	{
		return 1;
	}
	//window.setSize(sf::Vector2u(640, 640));
	window.setIcon(32, 32, icon.getPixelsPtr());

	///////////////////////////////////////

	//Game field (5*9)
	//Point 137*79 - leftmost point
	//length 41; width 53
	const int ROWS = 5;
	const int COLS = 9;

	bool FIELD_GAME_STATUS[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			FIELD_GAME_STATUS[i][j] = true;
		}
	}

	Clock timeMoney;
	


	Clock clock;
	Home h;

	while (window.isOpen())
	{
		

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		
		//Create a background
		createBack(window);
		//createMap(window);
		/*Texture plantTexture;
		Sprite plantSprite;
		plantTexture.loadFromFile("assets/Plants/Peashooter/Peashooter_0.png");
		plantSprite.setTexture(plantTexture);
		plantSprite.setTextureRect(sf::IntRect(0, 0, 85, 70));
		plantSprite.setPosition(h.getGrid()[2][6].x, h.getGrid()[2][6].y);
		window.draw(plantSprite);*/
		Player player;
		player.getInventory().showInventory(window);
		PeaShooter ps;
		ps.makecard(window, player.getInventory().getInventoryCoordinates(), player.getInventory().getStatus());
		player.getSeedPacket().makeSeedPacket(window);
		Image c;
		c.loadFromFile("assets/Inventory-GameScreen/Cards/card_cherrybomb.png");
		Texture c_t;
		c_t.loadFromImage(c);

		ps.getCard().setTexture(c_t);
		ps.getCard().setPosition(player.getSeedPacket().getCoordinates()[0].x, player.getSeedPacket().getCoordinates()[0].y);

		window.draw(ps.getCard());
		//player.getInventory().addSeed(&ps);
		//player.plantSelectionFromInventoryToSeedPacket(window, event);
		window.setSize(sf::Vector2u(700, 740));
		window.display();
	}
	return 0;
}