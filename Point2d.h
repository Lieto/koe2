//
// Created by Vesa on 8.7.2016.
//

#ifndef KOE2_POINT2D_H
#define KOE2_POINT2D_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Point2d {
private:
    double m_x, m_y;

public:
    Point2d(double x, double y);

    void draw();

    string toString();

    friend double distanceFrom(const Point2d &first, const Point2d &second);

    double distanceTo( Point2d &another) {

        double deltaX = m_x - another.m_x;
        double deltaY = m_y - another.m_y;
        return sqrt(deltaX*deltaX + deltaY*deltaY);
    }
};




#endif //KOE2_POINT2D_H
