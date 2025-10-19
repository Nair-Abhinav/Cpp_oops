#include<bits/stdc++.h>
using namespace std;
// notes:
// destructor in C++
// destructor is a special member function of a class that is executed when an object of the class goes out of scope or is explicitly deleted
// destructor has same name as class but is preceded by a tilde (~)
// destructor has no return type and takes no parameters
// destructor is used to free resources allocated to the object
// if no destructor is defined, C++ provides a default destructor that does nothing
// it automatically cleans up non-dynamic memory, but for dynamic memory, a user-defined destructor is needed to avoid memory leaks
class Sample{
    public:
    // constructor
    Sample(){
        cout<<"Constructor called: Sample object created"<<endl;
    }
    ~Sample(){
        cout<<"Destructor called: Sample object destroyed"<<endl;
    }
};

int main(){
    {
        Sample s1; // constructor called
    } // s1 goes out of scope here, destructor called
    Sample *s2 = new Sample(); // constructor called
    // for dynamically memory allocated object , destructor is not called automatically
    // for dynamically allocated objects, we need to explicitly call delete to invoke the destructor
    delete s2; // destructor called
    return 0;
}