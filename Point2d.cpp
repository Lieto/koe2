//
// Created by Vesa on 8.7.2016.
//

#include "Point2d.h"

Point2d::Point2d(double x, double y) {
    if ( isinf(x) || isinf(y))
        throw invalid_argument( "Coordinates must be finite" );
    if ( isnan(x) || isnan(y))
        throw invalid_argument( "Coordinates cannot be Nan" );

    m_x = x;
    m_y = y;
}

double distanceFrom(const Point2d &first, const Point2d &second) {

    double deltaX = first.m_x - second.m_x;
    double deltaY = first.m_y - second.m_y;
    return sqrt(deltaX*deltaX + deltaY*deltaY);
}

string Point2d::toString() {
    return "(" + to_string(m_x) + ", " + to_string(m_y) + ")";
}

void Point2d::draw() {

    S

}

