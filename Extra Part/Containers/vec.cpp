// Vector Introduction
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Method 1 : Creating a null vector
    vector<int> vec; // Size zero as we have not stored anything yet:
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6); // does the same thing as push_back
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

    // 2: Other way of initializing a vector
    vector<int> nums = {1, 2, 3, 4, 5}; // with no empty elements:
    for(int val: nums){
        cout << val<< " "; // 1 2 3 4 5
    }
    cout << endl;
    // Method 3 : with size and value count
    vector<int> data(4, 10); // means size 4 and we want 10 on all 4 indexes:
    for(int type: data){
        cout << type << " "; // 10 10 10 10
    }
    cout << endl;
    //4: Suppose we want to pass our vector one into vector 2
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2(vec1);
    for(int values: vec2){
        cout << values << " "; // 1 2 3
    }
    cout << endl;
    cout << "More Functions on vectors:::::"<< endl;
    vector<int> numb = {1, 2, 3, 4, 5};
    numb.erase(numb.begin());
    for(int val: numb){
        cout << val << " "; // 2 3 4 5, 1 will be taken out
    }
    cout << endl;
    // now deleting value at index 2
    // new vector = numb = {2, 3, 4, 5}
    numb.erase(numb.begin() + 2); 
     for(int val: numb){
        cout << val << " "; // 2 3 5, 4 will be taken out
    }
    cout << endl;
    // same with index 1 
    // new vector = {2, 3, 5}
    numb.erase(numb.begin() + 1);
    for(int val: numb){
        cout << val << " "; // 2 5, 3 will be taken out 
    }
    cout << endl;
    // And if we want to erase a range of elements from a vector
    vector<int>elem = {1, 2, 3, 4, 5, 6, 7};
    for(int val: elem){
        cout << val << " "; // 1 2 3 4 5 6 7
    }
    cout << endl;
    // deleting from 3 - 5;
    elem.erase(elem.begin() + 2, elem.begin() + 4); // 3 -5 
    for(int val: elem){
        cout << val << " "; // 1 2 5 6 7, 3-5 erased
    }
    cout << endl;
    // Now if we want to insert element in the middle of a vector we use insert() for it
    vector<int>trial = {1, 2, 4, 5};
    trial.insert(trial.begin() + 2,  3);  // at index 2 we want to put value 3
    for(int val: trial){
        cout << val << " "; // 1 2 3 4 5
    }
    cout << endl;
    trial.clear(); // clears the trail vector but capacity is still present
    cout << trial.size() << endl; // 0
    cout << trial.capacity()<< endl; // 8
    // and to verify if our vector is empty or not
    cout << trial.empty() << endl;
    return 0;
}