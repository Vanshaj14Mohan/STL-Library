// In this we would discuss about Stack Container
#include<iostream>
#include<stack>
using namespace std;

int main(){
    // Creating a stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack top => " << s.top() << endl;
    cout << "Stack size=> " << s.size() << endl;
    return 0;
}