// Question 6: Create a class Rectangle.
// It should have length and width attributes.
// These attributes should be private (not public).
// Set their default values to 1.
// Implement public getter methods: getLength() and getWidth(), which return the values.
// Implement public setter methods: setLength(double len) and setWidth(double wid). These methods should only update the attribute if the new value is greater than 0.
// Implement a public method calculateArea() that returns the area.

#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
        double length = 1;
        double width = 1;

    public:
        void setLength(double length){
            if(length > 0){
                this->length = length;
            }
        }
        void setWidth(double width){
            if(width > 0){
                this->width = width;
            }
        }
        double getLength(){
            return length;
        }
        double getWidth(){
            return width;
        }
        double calculateArea(){
            return length * width;
        }
};

int main(){
    Rectangle r1;
    r1.setLength(5);
    r1.setWidth(4);
    cout<<r1.getLength()<<endl;
    cout<<r1.getWidth()<<endl;
    cout<<r1.calculateArea()<<endl;
    return 0;
}