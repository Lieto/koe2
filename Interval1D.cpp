//
// Created by Vesa on 16.7.2016.
//

#include <cmath>
#include <stdexcept>
#include "Interval1D.h"

using namespace std;

Interval1D::Interval1D(const double min, const double max) {

    if ( isinf(min) || isinf(max))
        throw invalid_argument( "Endpoints must be finite" );
    if ( isnan(min) || isnan(max))
        throw invalid_argument( "Endpoints cannot be Nan" );

    if (min <= max) {
        m_min = min;
        m_max = max;
    }
    else throw invalid_argument( "Illegal interval");

}

double Interval1D::length() {
    return m_max - m_min;
}

double Interval1D::min() {
    return m_min;
}

double Interval1D::max() {
    return m_max;
}

string Interval1D::toString() {

    return "[" + to_string(m_min) + ", " + to_string(m_max) + "]";
}

bool Interval1D::MaxEndPointComparator(Interval1D i, Interval1D j) {
    return (i.m_max < j.m_max);
}

bool Interval1D::MinEndPointComparator(Interval1D i, Interval1D j) {
    return (i.m_min < j.m_min);
}

bool Interval1D::LengthComparator(Interval1D i, Interval1D j) {
    return (i.length() < j.length());
}
