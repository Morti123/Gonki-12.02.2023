#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"
struct Vrag{
	sf::Texture texture;
	sf::Sprite sprite;
};
void vragInit(Vrag& obj, sf::Vector2f pos, std::string fileName) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void vragUpdate(Vrag& obj) {
	float PosX[]{ 110.f, 120.f, 130.f, 140.f, 150.f, 160.f, 170.f, 180.f, 190.f,200.f,210.f,220.f,230.f,240.f,250.f,260.f,
		270.f,280.f,290.f,300.f,315.f,330.f };
	float PosY[]{ -150.f, -200.f, -250.f, -300.f,-350.f,-400.f,-450.f,-500.f,-550.f, -600.f,-650.f,-700.f,-750.f,-800.f,
		-850.f,-900.f,-950.f,-1000.f,-1050.f,-1100,-1150.f,-1200.f };
	int index = rand() % 22;

	obj.sprite.move(0.f, VragSpeedY);
	if (obj.sprite.getPosition().y >= WINDOW_HEIGHT) {
		obj.sprite.setPosition(PosX[index], PosY[index]);
	}
}

void vragDraw(sf::RenderWindow& window, Vrag& obj) {
	window.draw(obj.sprite);
}

