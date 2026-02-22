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
    cout << "Size of first list: "<< l.size() << endl;
    // Removing elements
    l.pop_front(); // 6 would be removed
    l.pop_back(); // 3 would be removed
     for(int val: l){
        cout << val << " "; // 5 4 1 2 
    }
    cout << endl;
    // 2: Creating a list with elemnts
    list<int> li = {1, 2, 3, 4, 5};
    for(int val: li){
        cout << val << " "; // 1 2 3 4 5 
    }
    cout << endl;
    cout << "Size of second list: "<< li.size() << endl;
    return 0;
}
