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
    cout << "Size of first list: "<< l.size() << endl; // 6
    // Removing elements
    l.pop_front(); // 6 would be removed from front
    l.pop_back(); // 3 would be removed from back
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
    cout << "Size of second list: "<< li.size() << endl; // 5
    // Accessing elements:
    cout <<"Element at front: " << li.front() << endl; // 1
    cout << "Element at end: " << li.back() << endl; // 5
    cout << "For Forward Loop Iterator " << endl;
    list<int>:: iterator data;
    for(data = li.begin(); data != li.end(); data++){
        cout << *(data) << " "; // 1 2 3 4 5
    }
    cout << endl;
    cout << "For Backward Loop Iterator " << endl;
    list<int> lis = {1, 2, 3, 4};
    // using auto
    for(auto li = lis.rbegin(); li != lis.rend(); li++){
        cout << *(li) << " "; // 4 3 2 1
    }
    cout << endl;
    // Insert element in between, enter 5 at 2nd index
    auto it = lis.begin();
    advance(it, 2);
    lis.insert(it, 5);
    cout << "After insertion: " << endl;
    for(int val: lis){
        cout << val << " "; // 1 2 5 3 4
    }
    cout << endl;
    return 0;
}
