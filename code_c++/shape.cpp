#include <iostream>
#include <cmath>
using namespace std;

class Shape { 
public: 
    virtual double area() const = 0;  
    virtual double volume() const = 0; 
    virtual ~Shape() {} 
};

class Cube : public Shape {
private:
    double side;
public:
    Cube(double s) : side(s) {}
    
    
    double area() const override {
        return 6 * side * side;
    }
    

    double volume() const override {
        return side * side * side;
    }
};

class Sphere: public Shape {
private:
    double radius;
public:   
    Sphere(double r) : radius(r) {}
    
    
    double area() const override {
        return 4 * M_PI * radius * radius;
    }
    
    double volume() const override {
        return (4.0/3.0) * M_PI * radius * radius * radius;
    }
};

int main() {
    double value;
    cin >> value;
    
   
    Shape* cube = new Cube(value);
    Shape* sphere = new Sphere(value);
    
   
    cout << cube->volume() << " " 
         << cube->area() << " " 
         << sphere->volume() << " " 
         << sphere->area() << endl;
    
 
    delete cube;
    delete sphere;
    
    return 0;
}