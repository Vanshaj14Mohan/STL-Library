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
    cout << endl;
    d.pop_front();
    d.pop_back();
    for(int val: d){
        cout << val << " "; // 2 1 3 4
    }
    cout << endl;
    // Accessing elements
    cout << d.at(1) << endl; // 1
    cout << de[2]<< endl; // 3
    // Iterating in deque
    cout << "Forward Loop Iterator: " << endl;
    for(auto it = d.begin(); it != d.end(); it++){
        cout << *(it) << " "; // 2 1 3 4
    }
    cout << endl;
    cout << "Backward Loop Iterator: " << endl;
    for(auto rev_it = d.rbegin(); rev_it != d.rend(); rev_it++){
        cout << *(rev_it) << " "; // 4 3 1 2
    } 
    cout << endl;
    return 0;
}