#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 600;
const float WINDOW_HEIGHT = 1000;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float FPS = 60.f;

const sf::Vector2f TravaStartPos{ 0, 0 };
const std::string Trava_File_Name("trava (3).jpg");
const sf::Vector2f TravaStartPos2{ 0, -WINDOW_HEIGHT };

const sf::Vector2f DorogaStartPos{ 150, 0 };
const std::string Doroga_File_Name("Doroga (1).png");
const sf::Vector2f DorogaStartPos2{ 150, -WINDOW_HEIGHT };

const sf::Vector2f PesokStartPos{ 135,0 };
const std::string Pesok_File_Name("Pesok (2).jpg");
const sf::Vector2f PesokStartPos2{ 135,-WINDOW_HEIGHT };

const sf::Vector2f MachinaStartPos{ 200, 700 };
const std::string Machina_File_Name("Machina__2.png");

const sf::Vector2f VragStartPos{ 150, -500 };
const std::string Vrag_File_Name("Vrag (2).png");

const sf::Vector2f VragStartPos2{ 300, -700 };
const std::string Vrag_File_Name2("Vrag2 (2).png");

const sf::Vector2f VragStartPos3{ 330, -400 };
const std::string Vrag_File_Name3("Vrag3.png");

float SpriteSpeedY = 4.f;
const float VragSpeedY = 8.f;


