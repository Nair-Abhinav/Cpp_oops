// Create a class Employee with attributes like name (string), id (int), and department (string). Implement overloaded constructors to initialize these details in various ways:
// One constructor that takes just a name.
// A second constructor that takes a name and an id.
// A third constructor that takes a name, an id, and a department.
// (You might also want to add a display() method to print the employee's details so you can prove it works in main.)

#include<bits/stdc++.h>
using namespace std;

class Employee{
public:
    string name,department;
    int id;

    // constructors
    Employee(string name){
        this->name = name;
    }

    Employee(string name , int id){
        this->name = name;
        this->id = id;
    }

    Employee(string name , int id , string department){
        this->name = name;
        this->id = id;
        this->department = department;
    }

    // methods
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Department"<<department<<endl;
    }

};
int main(){
    Employee e1("Alice");
    Employee e2("Bob",1);
    Employee e3("Evan",2,"IT");
    e1.display();
    e2.display();
    e3.display();
    return  0;
}