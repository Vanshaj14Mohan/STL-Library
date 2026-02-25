// In this we would discuss about Stack Container
#include<iostream>
#include<stack>
using namespace std;

int main(){
    // Creating a stack
    stack<int> s; // an empty stack 
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack top => " << s.top() << endl;
    cout << "Stack size=> " << s.size() << endl;
    // checking if stack is empty or not
    cout <<"Check if stack is empty or not: " << s.empty() << endl; // return 0 as it's not empty
    // Iterating over stack
    cout<< "Iterating over stack "<< endl;
    while(!s.empty()){
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;
    return 0;
}