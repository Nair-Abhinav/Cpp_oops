#include<bits/stdc++.h>
using namespace std;
// notes:
// shallow copy vs deep copy in C++
// shallow copy -> default copy constructor
// deep copy -> user defined copy constructor
// main prob of shallow copy is with pointer attributes and Dynamic Memory Allocation
// student class
class Student{
public:
    string name;
    int age;
    // shallow copy fails in heap memory allocation
    double *cgpaptr;

    // constructor
    Student(string n, int a, double cgpa){
        name = n;
        age = a;
        cgpaptr = new double; // pointer attribute
        *cgpaptr = cgpa;
    }

    // copy constructor -> deep copy
    Student(const Student &s){
        this-> name = s.name;
        this-> age = s.age;
        this-> cgpaptr = new double; // allocate new memory
        *(this->cgpaptr) = *(s.cgpaptr); // copy value
    }
};

int main(){
    Student s1("Alice", 20, 3.8);
    Student s2(s1); // copy constructor called
    cout<<"Student 1 Name: "<<s1.name<<", Age: "<<s1.age<<", CGPA: "<<*s1.cgpaptr<<endl;
    cout<<"Student 2 Name: "<<s2.name<<", Age: "<<s2.age<<", CGPA: "<<*s2.cgpaptr<<endl;
    // modifying s2's cgpa
    *(s2.cgpaptr) = 9.1;
    cout<<"After modifying Student 2's CGPA:"<<endl;
    cout<<"Student 1 Name: "<<s1.name<<", Age: "<<s1.age<<", CGPA: "<<*s1.cgpaptr<<endl;
    cout<<"Student 2 Name: "<<s2.name<<", Age: "<<s2.age<<", CGPA: "<<*s2.cgpaptr<<endl;

    // deep copy
    Student s3(s1);
    cout<<"Student 3 Name: "<<s3.name<<", Age: "<<s3.age<<", CGPA: "<<*s3.cgpaptr<<endl;
    // modifying s3's cgpa  
    *(s3.cgpaptr) = 8.5;
    cout<<"After modifying Student 3's CGPA:"<<endl;
    cout<<"Student 1 Name: "<<s1.name<<", Age: "<<s1.age<<", CGPA: "<<*s1.cgpaptr<<endl;
    cout<<"Student 2 Name: "<<s2.name<<", Age: "<<s2.age<<", CGPA: "<<*s2.cgpaptr<<endl;
    cout<<"Student 3 Name: "<<s3.name<<", Age: "<<s3.age<<", CGPA: "<<*s3.cgpaptr<<endl;
    return 0;
}