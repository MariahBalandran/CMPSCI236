/******************************************************************************

                              Mariah Balandran

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

class Rectangle {
    protected:
        double length;
        double width;
    
    public:
        Rectangle(double w = 1.0, double l = 1.0);
        double area();
};

Rectangle::Rectangle(double w, double l) {
    width = w;
    length = l;
}

double Rectangle::area() {
    return(width*length);
}

class Box : public Rectangle {
    protected:
        double depth;
    public:
        Box(double w = 1.0, double l = 1.0, double d = 1.0);
        double area();
        double volume();
};

Box::Box(double w, double l, double d) {
    width = w;
    length = l;
    depth = d;
}

double Box::area() {
    //surface area
    
    return(2 * (depth*length + width*length + width*depth));
}

double Box::volume() {
    return(width*length*depth);
}

int main() {
    
    Rectangle rect1, rect2(1,2);
    Box box1(3,4,5);
    
    cout << "The area of rect1 is " << rect1.area() << endl;
    cout << "The area of rect2 is " << rect2.area() << endl;
    cout << "The surface area of box1 is " << box1.area() << endl;
    cout << "The volume of box1 is " << box1.volume() << endl;
    
    rect1 = box1;
    
    cout << "\nThe area of rect1 is now " << rect1.area() << endl;

    return 0;
}
