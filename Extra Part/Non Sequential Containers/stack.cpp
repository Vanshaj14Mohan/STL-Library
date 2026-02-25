// In this we would discuss about Stack Container
// Most important and frequently used operations on Stack
#include<iostream>
#include<stack>
using namespace std;

int main(){
    // Creating a stack
    stack<int> s; // an empty stack 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "Stack top => " << s.top() << endl; // 4
    cout << "Stack size=> " << s.size() << endl; // 4
    // checking if stack is empty or not
    cout <<"Check if stack is empty or not: " << s.empty() << endl; // return 0 as it's not empty
    // Iterating over stack
    cout<< "Iterating over stack "<< endl;
    while(!s.empty()){
        cout << s.top()<< " ";
        s.pop();
    } // 4 3 2 1
    cout << endl;
    // Try swapping stack values with others
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    stack<int> s2;
    s2.swap(s1); // swapping s1 with s2, now s1 becomes empty
    cout << "Stack 1 size: " << s.size() << endl; //0 
    cout << "Stack 2 size: " << s2.size() << endl; // 3
    return 0;
}