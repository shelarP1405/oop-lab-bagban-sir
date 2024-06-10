#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    int centerX;
    int centerY;
    int radius;
    double circumference;
    double area;

    // Making Line a friend class of Circle
    friend class Line;

public:
    Circle() : centerX(0), centerY(0), radius(0), circumference(0), area(0) {}

    Circle(int cx, int cy, int r) : centerX(cx), centerY(cy), radius(r), circumference(0), area(0) {}

    void calarea() {
        area = (3.14 * radius * radius);
    }

    double getarea() {
        return area;
    }

    void calcircumference() {
        circumference = (2 * 3.14 * radius);
    }

    double getcircumference() {
        return circumference;
    }
};

class Line {
private:
    int x1;
    int y1;
    int x2;
    int y2;
    double slope;
    double intercept;
    float d1;
    float d2;
    float a, c, d, final;

public:
    Line() : x1(0), y1(0), x2(0), y2(0), slope(0), intercept(0) {}

    Line(int X1, int Y1, int X2, int Y2) : x1(X1), y1(Y1), x2(X2), y2(Y2), slope(0), intercept(0) {}

    void calslope() {
            slope = ((double)(y2 - y1) / (x2 - x1));
    }

    void calintercept() {
    intercept = (y1 - slope * x1);
   }

    void istangent(Circle &circle) {
        // Accessing the private members of Circle class directly
        int centerX = circle.centerX;
        int centerY = circle.centerY;
        int radius = circle.radius;

        d1 = (x2 - x1);
        d2 = (y2 - y1);
        a = ((y1 * d1) - (x1 * d2));
        c = abs(((d1 * centerY) - (d2 * centerX) - a));
        d = sqrt((d1 * d1) + (d2 * d2));
        final = c / d;

        if (final == radius) {
            cout << "This is a tangent" << endl;
        } else {
            cout << "This is not a tangent" << endl;
        }
    }
};

int main() {
    int x, y, r;
    cout << "Enter center x and y: ";
    cin >> x >> y;
    cout << "Enter radius: ";
    cin >> r;
    Circle c1(x, y, r);
    c1.calarea();
    c1.calcircumference();
    cout << "Area of circle: " << c1.getarea() << endl;
    cout << "Circumference of circle: " << c1.getcircumference() << endl;

    int x1, y1, x2, y2;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;
    Line l1(x1, y1, x2, y2);
    l1.calslope();
    l1.calintercept();
    l1.istangent(c1);

    return 0;
}

