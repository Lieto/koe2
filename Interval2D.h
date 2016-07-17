//
// Created by Vesa on 16.7.2016.
//

#ifndef KOE2_INTERVAL2D_H
#define KOE2_INTERVAL2D_H

#include "Interval1D.h"

class Interval2D {
private:
    Interval1D m_x = Interval1D(0.0, 0.0);
    Interval1D m_y = Interval1D(0.0, 0.0);

public:
    Interval2D(Interval1D x, Interval1D y);
    void draw();
    string toString();

};


#endif //KOE2_INTERVAL2D_H
