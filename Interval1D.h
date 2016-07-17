//
// Created by Vesa on 16.7.2016.
//

#ifndef KOE2_INTERVAL1D_H
#define KOE2_INTERVAL1D_H

#include <string>

using namespace std;

class Interval1D {
private:
    double m_min;
    double m_max;

public:
    static bool MinEndPointComparator(Interval1D i, Interval1D j);
    static bool MaxEndPointComparator(Interval1D i, Interval1D j);
    static bool LengthComparator(Interval1D i, Interval1D j);

    Interval1D(const double min, const double max);
    string toString();
    double length();
    double min();
    double max();
};


#endif //KOE2_INTERVAL1D_H
