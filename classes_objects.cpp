#include<bits/stdc++.h>
using namespace std;

class Teacher{
private:
    // attributes
    double salary;
public:
    // constructor
    Teacher(){
        cout<<"Teacher object created"<<endl;
        name = "";
        subject = "";
        age = 0;
        dept = "";
        salary = 0.0;
    }

    Teacher(string name , string subject, int age , string dept , double salary){
        this->name = name;
        this->subject = subject;
        this->age = age;
        this->dept = dept;
        this->salary = salary;
    }
    // attributes
    string name;
    string subject;
    int age;
    string dept;

    // methods
    void changeDept(string newDept){
        dept = newDept;
    }
    // setter
    void setSalary(double salary){
        this->salary = salary;
    }

    // getter
    double getSalary() const {
        return salary;
    }

};


int main(){
    Teacher t1; // object creation , automatically calls constructor
    Teacher t2("John Doe", "Mathematics", 30, "Science", 50000);
    // copy constructor is not defined, so default copy constructor will be used
    Teacher t3 = t2; // copy constructor called
    // copy constructors are shallow copy by default
    // shallow copy problem -> if there are pointer attributes, both objects will point to the same memory location
    cout<<"Teacher 2 Name: "<<t2.name<<", Subject: "<<t2.subject<<", Age: "<<t2.age<<", Dept: "<<t2.dept<<", Salary: "<<t2.getSalary()<<endl;
    cout<<"Teacher 3 Name: "<<t3.name<<", Subject: "<<t3.subject<<", Age: "<<t3.age<<", Dept: "<<t3.dept<<", Salary: "<<t3.getSalary()<<endl;
    return 0;
}