//
// Created by Vesa on 16.7.2016.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

#include "Interval1D.h"
#include "Interval2D.h"
#include "Counter.h"
#include "Point2d.h"
#include "StdDraw.h"

using namespace std;

void test_interval1D() {
    vector<Interval1D> intervals;
    intervals.push_back(Interval1D(15.0, 33.0));
    intervals.push_back(Interval1D(45.0, 60.0));
    intervals.push_back(Interval1D(20.0, 70.0));
    intervals.push_back(Interval1D(46.0, 55.0));

    cout << "Unsorted" << endl;
    for (int i = 0; i < intervals.size(); i++) {
        cout << intervals[i].toString() << endl;
    }

    cout << "Sort by min endpoint" << endl;
    sort(intervals.begin(),intervals.end(), Interval1D::MinEndPointComparator);
    for (int i = 0; i < intervals.size(); i++) {
        cout << intervals[i].toString() << endl;
    }

    cout << "Sort by max endpoint" << endl;
    sort(intervals.begin(),intervals.end(), Interval1D::MaxEndPointComparator);
    for (int i = 0; i < intervals.size(); i++) {
        cout << intervals[i].toString() << endl;
    }

    cout << "Sort by length" << endl;
    sort(intervals.begin(),intervals.end(), Interval1D::LengthComparator);
    for (int i = 0; i < intervals.size(); i++) {
        cout << intervals[i].toString() << endl;
    }


}

void test_interval2D() {

    double xlo = 10.0;
    double xhi = 40.0;
    double ylo = 20.0;
    double yhi = 50.0;

    Interval1D x = Interval1D(xlo, xhi);
    Interval1D y = Interval1D(ylo, yhi);
    Interval2D box = Interval2D(x, y);
    box.draw();

    //Counter c("hits");

    /*
    for (int t = 0; t < 10000; t++) {
        double x = rand();
        double y = rand();
        Point2d p(x, y);

        if (box.contains(p)) c.increment();
        else p.draw();
    }

    cout << c.toString() << endl;
    cout << box.area() << endl;
*/
     }

void test_point() {

    int x0 = 20;
    int y0 = 50;
    int n = 100;

    vector<Point2d> points;

    default_random_engine generator;
    uniform_int_distribution<int> uni_dist(0, 100);

    for (int i = 0; i < n; i++) {
        int x = uni_dist(generator);
        int y = uni_dist(generator);

        //points.push_back(Point2d(x, y));
        //points.end().draw();
    }
}

void test_std_draw() {

    StdDraw screen;
    screen.init();
    screen.square(.2, .8, .1);
    //StdDraw::square(.2, .8, .1);
    //StdDraw.square(.2, .8, .1);
}

int main() {
    test_std_draw();
    //test_point();
    //test_interval1D();
    //test_interval2D();
}
