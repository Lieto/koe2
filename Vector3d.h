//
// Created by Vesa on 8.7.2016.
//

#ifndef KOE2_VECTOR3D_H
#define KOE2_VECTOR3D_H

#include <iostream>

class Vector3d {
private:
    double m_x, m_y, m_z;
public:
    Vector3d(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z) {}

    void print() {
        std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")" << std::endl;
    }

    friend class Point3d;
};

class Point3d
{
private:
    double m_x, m_y, m_z;

public:
    Point3d(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z) {}



    void print() {
        std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")" << std::endl;
    }

    void moveByVector(Vector3d &v) {

        m_x += v.m_x;
        m_y += v.m_y;
        m_z += v.m_z;

    }
};


#endif //KOE2_VECTOR3D_H
