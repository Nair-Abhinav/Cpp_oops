// Question: Create a class MessagePrinter with a method printMessage(std::string name) which prints the message "hello <name>".
#include<bits/stdc++.h>
using namespace std;
class MessagePrinter{
public:
    void printMessage(string name){
        cout<<"hello "<<name<<endl;
    }
};

int main(){
    MessagePrinter mp;
    mp.printMessage("Alice");
    return 0;
}