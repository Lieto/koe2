//
// Created by Vesa on 16.7.2016.
//

#ifndef KOE2_STDDRAW_H
#define KOE2_STDDRAW_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class StdDraw {
private:
    sf::RenderWindow m_frame;
    //static StdDraw m_std = StdDraw();

    sf::Color m_penColor = sf::Color::Red;
    double m_penRadius;

    const int DEFAULT_SIZE = 512;
    const double BORDER = 0.0;
    const double DEFAULT_XMIN = 0.0;
    const double DEFAULT_XMAX = 1.0;
    const double DEFAULT_YMIN = 0.0;
    const double DEFAULT_YMAX = 1.0;

    const int m_width = DEFAULT_SIZE;
    const int m_height = DEFAULT_SIZE;


    double m_xmin, m_ymin, m_xmax, m_ymax;

public:
    StdDraw() { init(); }
    /*
    StdDraw& getInstance() {
        StdDraw instance;
        return instance;
    }
     */


public:
    void init();
    void setXscale();
    void setXscale(double min, double max);
    void setYscale();
    void setYscale(double min, double max);
    void setScale();
    void setPenColor();
    void setPenColor(sf::Color color);
    void setPenRadius();
    void setPenRadius(double radius);
    void clear();
    void clear(sf::Color color);
    void square(double x, double y, double halfLength);
    void point(double x, double y);

private:
    double scaleX(double x) { return m_width * (x - m_xmin) / (m_xmax - m_xmin); }
    double scaleY(double y) { return m_height * (y - m_ymin) / (m_ymax - m_ymin); }
    double factorX(double w) { return w * m_width / abs(m_xmax - m_xmin); }
    double factorY(double h) { return h * m_height / abs(m_ymax - m_ymin); }
    double userX(double x) { return m_xmin + x * (m_xmax - m_xmin) / m_width; }
    double userY(double y) { return m_ymax + y * (m_ymax - m_ymin) / m_height; }

};


#endif //KOE2_STDDRAW_H
