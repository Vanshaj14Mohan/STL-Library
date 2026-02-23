// Implementing a Deque in C++:
#include<iostream>
#include<deque>
using namespace std;

int main(){
    // 1: Creating a deque with elements
    deque<int> de = {1,2, 3};
    for(int val: de){
        cout << val << " "<< endl; // 1 2 3
    }

    cout << "Deque size: " << de.size() << endl; // 3
    // 2: Creating an empty deque
    deque<int> d;
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);
    d.push_front(2);
    d.emplace_back(5);
    d.emplace_front(6); 
    for(int val: d){
        cout << val << " "; // 6 2 1 3 4 5
    }

    return 0;
}