#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects

	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect1.setSize(sf::Vector2f(51, 51));
	rect1.setPosition(200, 200);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(31, 31));
	rect2.setPosition(210, 210);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(15, 15));
	rect3.setPosition(218, 218);
	rect3.setFillColor(sf::Color::Blue);

	rect4.setSize(sf::Vector2f(50, 50));
	rect4.setOrigin(25, 25);
	rect4.setPosition(1200, 675);
	rect4.setFillColor(sf::Color::Green);
	
	circle.setRadius(50);
	circle.setOrigin(50,50);
	circle.setPosition(600, 337);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineThickness(3);
	circle.setOutlineColor(sf::Color::Red);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error Loading Text from file!";
	}

	text.setFont(font);
	text.setCharacterSize(25);
	text.setString("Hello world!");
	text.setFillColor(sf::Color::Red);
	text.setPosition(600, 0);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	rect4.setPosition(sf::Vector2f(window->getSize()));
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(circle);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}