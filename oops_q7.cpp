// Question 12: Create a Student class.

// It should store a std::string name and three separate int marks (mark1, mark2, mark3).

// Implement a constructor that takes the name and the three marks to initialize the object.

// Implement a method calculateTotal() that returns the sum of the three marks.

// Implement a method calculateAverage() that returns the average (as a double).

// Implement a method displayResult() that prints all the student's details (name, marks, total, and average) in a clean format.

#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int mark1,mark2,mark3;


        Student(string name , int mark1 , int mark2 , int mark3){
            this->name = name;
            this->mark1 = mark1;
            this->mark2 = mark2;
            this->mark3 = mark3;
        }

        int calculateTotal(){
            return mark1 + mark2 + mark3;
        }

        double calculateAverage(){
            double avg = (mark1 + mark2 + mark3)/(double)3;
            return avg;
        }

        void displayResult(){
            cout<<name<<endl;
            cout<<mark1<<endl;
            cout<<mark2<<endl;
            cout<<mark3<<endl;
            cout<<calculateTotal()<<endl;
            cout<<calculateAverage()<<endl;
        }

};

int main(){
    Student s1("Alice" , 90 ,97 ,94);
    s1.displayResult();
    return 0;
}

