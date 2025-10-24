// Question 24: Create an abstract base class Shape.

// It should have two pure virtual functions:

// virtual double calculateArea() = 0;

// virtual double calculatePerimeter() = 0; (A "pure virtual" function is one that has = 0; at the end. It must be overridden by any child class.)

// Create a class Rectangle that inherits from Shape.

// It should have private length and width.

// It needs a constructor to set them.

// It must override calculateArea() and calculatePerimeter() to provide the correct formulas for a rectangle.

// Create a class Circle that also inherits from Shape.

// It should have a private radius.

// It needs a constructor to set it.

// It must override calculateArea() and calculatePerimeter() for a circle.

// In main, create a Rectangle object and a Circle object and print their areas and perimeters.

#include<bits/stdc++.h>
using namespace std;
class Shape{
    public:
        virtual double calculateArea() = 0;
        virtual double calculatePerimeter() = 0;
};

class Rectangle : public Shape{
    private:
        int length;
        int width;

    public:
        Rectangle(int length , int width){
            this->length = length;
            this->width = width;
        }

        double calculateArea() override{
            return (double)length * width;
        }

        double calculatePerimeter() override{
            return (double)2*(length + width);
        }
};

class Circle : public Shape{
    private:
        int radius;
    public:
        Circle(int radius){
            this->radius = radius;
        }

        double calculateArea() override{
            return 3.14 * radius * radius;
        }

        double calculatePerimeter() override{
            return 2 * 3.14 * radius;
        }
};

int main(){
    // rectangle
    // Rectangle r1(4 , 5);
    Shape* s1 = new Rectangle(4 , 5); // this is polymorphism
    cout<<"Rectangle area : "<<s1->calculateArea()<<endl;
    cout<<"Rectangle perimeter : "<<s1->calculatePerimeter()<<endl;
    Shape* s2 = new Circle(5); // this is polymorphism
    cout<<"Circle area : "<<s2->calculateArea()<<endl;
    cout<<"Circle area : "<<s2->calculatePerimeter()<<endl;
    return 0;
}