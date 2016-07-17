//
// Created by Vesa on 16.7.2016.
//
//#include "config.h"
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

int main(int argc, char** argv) {
    cout << "Test" << endl;

    sf::RenderWindow screen(sf::VideoMode(800, 600), "myproject");

    bool on = true;

    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color(100, 250, 50));

    while (on) {

        screen.clear(sf::Color::Black);
        screen.draw(shape);
        screen.display();
   }

    return 0;
}

