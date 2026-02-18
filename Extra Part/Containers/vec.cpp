// Vector Introduction
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec; // Size zero as we have not stored anything yet:
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    cout << vec.size() << endl; // 6
    cout << vec.capacity() << endl; // 8
    for(int val: vec){ // Iterating over vector using for each loop:
        cout << val << " "; // 1 2 3 4 5 6
    }
    cout << endl;
    vec.pop_back();
    for(int val: vec){ // Iterating over vector using for each loop:
        cout << val << " "; // 1 2 3 4 5
    }
    cout << endl;
    // Acccesing elements in a vector using at() or []
    cout << vec.at(1) << endl; // 2
    cout << vec.at(3) << endl; // 4
    cout << vec[0] << endl; // 1
    cout << vec[2] << endl; // 3
    // Printing element at front and back
    cout << "Element at front: " << vec.front() << endl; //1
    cout << "Element at back: " << vec.back() << endl; // 5
    return 0;
}