// Creating a List Container in C++:
#include<iostream>
#include<list>
using namespace std;

int main(){
    // 1: Creating an empty list
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.emplace_back(3);
    l.push_front(4);
    l.push_front(5);
    l.emplace_front(6);
    for(int val: l){
        cout << val << " "; // 6 5 4 1 2 3 
    }
    cout << endl;
    // Removing elements
    l.pop_front(); // 6 would be removed
    l.pop_back(); // 3 would be removed
     for(int val: l){
        cout << val << " "; // 5 4 1 2 
    }
}
