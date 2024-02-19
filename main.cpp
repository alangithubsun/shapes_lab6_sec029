
#include "Shapes.hpp"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
    //ask students why we can't do this
    //Shape bad_shape; //why is this not compiling??

    Shape* s = new Circle(3); //why doesn't this work?
    cout << "Circle Area: " << s->get_area() << endl;
    cout << "Circle Perimeter: " << s->get_perimeter() << endl;
    delete s;
    s = nullptr;

    Rectangle* r = new Square(10);
    cout << "Square Area: " << r->get_area() << endl;
    cout << "Square Perimeter: " << r->get_perimeter() << endl;
    delete r;

    //what will print? We never put "virtual" in front of
    //the Rectangle functions, so will this run the Rectangle
    //version or the Random versions?
    r = new Random();   //"delete r" deletes the object at r, not the ptr
    cout << "Random Area: " << r->get_area() << endl;
    cout << "Random Perimeter: " << r->get_perimeter() << endl;
    delete r;


    return 0;
}