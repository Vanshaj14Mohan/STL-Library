// Creating a List Container in C++:
#include<iostream>
#include<list>
using namespace std;

int main(){
    // 1: Creating an empty list
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(4);
    l.push_front(5);
    for(int val: l){
        cout << val << " "; // 5 4 1 2
    }
    cout << endl;
}
