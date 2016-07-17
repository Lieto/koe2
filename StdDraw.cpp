//
// Created by Vesa on 16.7.2016.
//

#include "StdDraw.h"
#include <stdexcept>

using namespace std;

void StdDraw::init() {
    //if (m_frame.isOpen()) m_frame.setVisible(false);
    sf::RenderWindow m_frame(sf::VideoMode(512, 512), "test");
    setXscale();
    setYscale();
    setPenColor();
    setPenRadius();
    clear();

}

void StdDraw::setPenRadius() {
    setPenRadius(0.002);

}

void StdDraw::setPenRadius(double radius) {
    if (radius < 0) throw invalid_argument("Pen radius must be nonnegative");
    m_penRadius = radius;
    float scaledPenRadius = (float) (radius * DEFAULT_SIZE);


}

void StdDraw::clear() {

    clear(sf::Color::White);
}

void StdDraw::clear(sf::Color color) {
    m_frame.clear(color);
}

void StdDraw::setPenColor() {
    setPenColor(sf::Color::Red);

}

void StdDraw::setPenColor(sf::Color color) {
    m_penColor = color;

}

void StdDraw::square(double x, double y, double halfLength) {

    if ( halfLength < 0) throw invalid_argument("Half lenght must be nonnegative");

    double xs = scaleX(x);
    double ys = scaleY(y);
    double ws = factorX(2*halfLength);
    double hs = factorY(2*halfLength);

    if (ws <= 1 && hs <= 1) point(x, y);
    else {
        sf::Vector2f size(ws, hs);
        sf::RectangleShape rectangle(size);
        rectangle.setPosition(xs, ys);
        m_frame.draw(rectangle);
    }
}

void StdDraw::setXscale() {
    setXscale(StdDraw::DEFAULT_XMIN, StdDraw::DEFAULT_XMAX);
}

void StdDraw::setXscale(double min, double max) {
    double size = max - min;
    if (size == 0.0) throw invalid_argument("The min and max are the same");

    m_xmin = min - BORDER * size;
    m_xmax = max + BORDER * size;
}

void StdDraw::setYscale() {
    setYscale(StdDraw::DEFAULT_YMIN, StdDraw::DEFAULT_YMAX);
}

void StdDraw::setYscale(double min, double max) {
    double size = max - min;
    if (size == 0.0) throw invalid_argument("The min and max are the same");

    m_ymin = min - BORDER * size;
    m_ymax = max + BORDER * size;
}

void StdDraw::setScale() {
    setXscale();
    setYscale();
}

/*
void StdDraw::pixel(double x, double y) {
}
*/

void StdDraw::point(double x, double y) {
    double xs = scaleX(x);
    double ys = scaleY(y);
    double r = m_penRadius;
    float scaledPenRadius = (float) (r * StdDraw::DEFAULT_SIZE);

    sf::CircleShape point(scaledPenRadius);
    point.setPosition(x, y);
    m_frame.draw(point);

}
