// Create a class Calculator with methods: calculateSum(int number1, int number2) to calculate the sum, and calculateDifference(int number1, int number2) to calculate the difference.

#include<bits/stdc++.h>
using namespace std;

class Calculator{
public:
    int sum(int n1 , int n2){
        return n1+n2;
    }
    int diff(int n1 , int n2){
        return n1 - n2;
    }
};


int main(){
    Calculator c;
    int add = c.sum(4 , 5);
    int sub = c.diff(5 , 4);
    cout<<add<<endl<<sub;
    return 0;
}