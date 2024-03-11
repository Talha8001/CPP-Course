#include <iostream>
#include <vector>
using namespace std;

const double PI=3.1415926;


class Shape {
public:    
    virtual void print() = 0;
};


class TwoDimentionalShape : public Shape {
public:
    virtual double getArea() = 0;
};


class Square : public TwoDimentionalShape {
private:
    double side; 

public:
    Square(double a) : side(a) {}

    virtual void print() {
        cout << "Square with side " << side;
    }
    virtual double getArea() {
        return side * side;
    }    
   
};


class Circle : public TwoDimentionalShape {
private:
    double radius; 

public:
    Circle(double r) : radius(r) {}
    virtual void print() {
        cout << "Circle with radius " << radius;
    }
    virtual double getArea() {
        return PI * radius * radius;
    }    
   
};


class ThreeDimentionalShape : public Shape {
public:
    virtual double getArea() = 0;
    virtual double getVolume() = 0;    
};


class Cube : public ThreeDimentionalShape {
private:
    double side;
public:
    Cube(double a) : side(a) {}
    virtual void print() {
        cout << "Cube with side " << side;
    }
    virtual double getArea() {
        return 6 * side * side;
    }
    virtual double getVolume() {
        return side * side * side;
    }
};


class Sphere : public ThreeDimentionalShape {
private:
    double radius;
public:
    Sphere( double r) : radius(r) {}
    virtual void print() {
        cout << "Sphere with radius " << radius;
    }
    virtual double getArea() {
        return 4*PI * radius * radius;
    }
    virtual double getVolume() {
        return 4*PI/3 * radius * radius * radius;
    }
};


int main() {
    vector<Shape*> v;


    v.push_back(new Circle(1));
    v.push_back(new Square(10));
    v.push_back(new Sphere(2));
    v.push_back(new Cube(1.1));
    v.push_back(new Circle(2.2));


    for (int i=0; i<v.size(); i++) {
        v[i]->print();


        TwoDimentionalShape *shape2d = dynamic_cast<TwoDimentionalShape*>(v[i]);
        if (shape2d) {
            cout << " has area " << shape2d->getArea() << endl;
        }
        ThreeDimentionalShape *shape3d = dynamic_cast<ThreeDimentionalShape*>(v[i]);
        if (shape3d) {
            cout << " has volume " << shape3d->getVolume() << " and area " << shape3d->getArea() << endl;
        }
    }
    for (int i=0; i<v.size(); i++) {
        delete v[i];
    }
}
