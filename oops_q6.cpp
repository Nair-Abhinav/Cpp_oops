// A static variable is shared by all objects of a class. It doesn't belong to an individual object; it belongs to the class itself.
// Question 11: Create a class that uses a static data member to count how many objects of that class have been created.
// Add a private static int objectCount to your class (e.g., ObjectCounter).
// In the class constructor, increment this static count.
// (Optional but good practice) In the class destructor, decrement the count.
// Include a public static method getCount() that returns the current count.

#include<bits/stdc++.h>
using namespace std;
class ObjectCounter{
    private:
        static int count;
    public:
        ObjectCounter(){
            count++;
        }

        ~ObjectCounter(){
            count--;
        }

        static int getCount(){
            return count;
        }
};
int ObjectCounter :: count = 0;
int main(){
    cout << "Initial count: " << ObjectCounter::getCount() << endl; // Should be 0
    ObjectCounter o1;
    cout << "Count after o1: " << ObjectCounter::getCount() << endl; // Should be 1
    { // Create a new scope
        ObjectCounter o2;
        ObjectCounter o3;
        cout << "Count after o2, o3: " << ObjectCounter::getCount() << endl; // Should be 3
    } // o2 and o3 are destroyed here (destructors run)
    cout << "Count after o2, o3 destroyed: " << ObjectCounter::getCount() << endl; // Should be 1
    // --- A note on how to call static methods ---
    // You can call it via an object (like you did):
    // cout << "Count 1 : " << o1.getCount(); 
    // But the standard way is to use the class name directly:
    // cout << "Count 1 : " << ObjectCounter::getCount();
    // This makes it clear it's a static method, not 
    // something belonging to o1. Both ways work.
    return 0;
}


