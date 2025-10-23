// Create a class Biggest that stores an array (or std::vector) of integers as a data member. Include a method display() to find and print the largest element in the array.


#include<bits/stdc++.h>
using namespace std;

class Biggest{
public:
    vector<int> nums;
    Biggest(vector<int> nums){
        this->nums = nums;
    }

    int maximum(){
        if (nums.empty()) {
            cout << "The array is empty." << endl;
            return; 
        }
        int maxm = nums[0];
        for(auto &n : nums){
            maxm = max(maxm , n);
        }
        return maxm;
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5};
    Biggest b1(arr);
    int res = b1.maximum();
    cout<<"Max : "<<res<<endl;
    return 0;
}