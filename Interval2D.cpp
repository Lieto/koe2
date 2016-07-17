//
// Created by Vesa on 16.7.2016.
//
#include <string>
#include <SFML/Graphics.hpp>
#include "Interval2D.h"

using namespace std;

Interval2D::Interval2D(Interval1D x, Interval1D y) {

    m_x = x;
    m_y = y;
}

string Interval2D::toString() {
    return m_x.toString() + " x " + m_y.toString();
}

void Interval2D::draw() {
    double xc = (m_x.min() + m_x.max()) / 2.0;
    double yc = (m_y.min() + m_y.max()) / 2.0;

    //StdDraw.rectangle(xc, yc, m_x.length() / 2.0, m_y.length() / 2.0);
    sf::RenderWindow screen(sf::VideoMode(800, 600), "myproject");

    bool on = true;

    sf::Vector2f size(xc, yc);
    sf::RectangleShape rectangle(size);
    sf::Vector2f position(m_x.min(), m_y.min());
    rectangle.setPosition(position);
    rectangle.setFillColor(sf::Color(100, 250, 50));

    while (on) {

        screen.clear(sf::Color::Black);
        screen.draw(rectangle);
        screen.display();
    }
}
