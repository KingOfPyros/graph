#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
class Class_Window : public sf::RenderWindow
{
	sf::Color _bgColor;
	std::string str;
public:
	Class_Window(int width, int heigth) : sf::RenderWindow(sf::VideoMode(width, heigth), str) {
		_bgColor = sf::Color::Red;
	}
	void show() {
		while (this->isOpen())
		{
			sf::Event event;
			while (this->pollEvent(event))
			{
				if (event.type == sf::Event::Closed) {
					this->close();
				}
			}
			this->display();
		}
	}
	void setBgColor(int r, int g, int b) {
		this->_bgColor.r = r;
		this->_bgColor.g = g;
		this->_bgColor.b = b;
	}
	void setString(char* name) {
		this->str = name;
	}
	~Class_Window() {
	}
};

