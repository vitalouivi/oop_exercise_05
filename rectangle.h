#ifndef OOP_LAB5_RECTANGLE_H
#define OOP_LAB5_RECTANGLE_H

#include "vertex.h"

template <class T>
class Rectangle {
public:
    vertex<T> dots[4];

    explicit Rectangle<T>(std::istream& is) {
        for (auto & dot : dots) {
            is >> dot;
        }
    }

	Rectangle<T>() = default;

    double Area() {
		double a = sqrt(((dots[1].x - dots[0].x) * (dots[1].x - dots[0].x)) + ((dots[1].y - dots[0].y) * (dots[1].y - dots[0].y)));
		double b = sqrt(((dots[2].x - dots[1].x) * (dots[2].x - dots[1].x)) + ((dots[2].y - dots[1].y) * (dots[2].y - dots[1].y)));
		return a * b;
    }

    void Printout(std::ostream& os) {
        for (int i = 0; i < 4; ++i) {
            os << this->dots[i];
            if (i != 3) {
                os << ", ";
            }
        }
        os << std::endl;
    }

    void operator<< (std::ostream& os) {
        for (int i = 0; i < 4; ++i) {
            os << this->dots[i];
            if (i != 3) {
                os << ", ";
            }
        }
    }
};

#endif //OOP_LAB5_RECTANGLE_H
