#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int xPos, int yPos) : x(xPos), y(yPos) {}

void Point::setPoint(int i, int j) {
    x = 60 + i;
    y = 80 + j;
}

void Point::display() const {
    cout << "зјБъ: (" << x << ", " << y << ")" << endl;
}