#include<bits/stdc++.h>
using namespace std;
// notes for inheritance:
// 1. Inheritance allows a class to inherit properties and methods from another class.
// 2. The class that inherits is called the derived class, and the class being inherited from is called the base class.
// 3. Syntax for inheritance: class DerivedClass : accessSpecifier BaseClass { // body };
// 4 . constructors chaining -> parent then child
// 5. destructors chaining -> child then parent


class Person{
public:
    string name;
    int age;

    Person(string name , int age){
        this->name = name;
        this->age = age;
    }
    void displayInfo() const {
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
    ~Person(){
        cout<<"Person Destructor called for "<<name<<endl;
    }
};

class Student : public Person{
public:
    int studentID;

    Student(string name, int age, int studentID) : Person(name, age){
        this->studentID = studentID;
    }

    void displayInfo() const {
        Person::displayInfo();
        cout<<"Student ID: "<<studentID<<endl;
    }
    ~Student(){
        cout<<"Student Destructor called for "<<name<<endl;
    }
};

int main(){
    // Person p1("Alice", 28);
    // p1.displayInfo();
    Student s1("Bob", 20, 1001);
    s1.displayInfo();
    return 0;
}