#include <iostream>
#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hello");
    window.display();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}