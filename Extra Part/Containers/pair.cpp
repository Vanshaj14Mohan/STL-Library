// In this we would look into a special container named pair
#include<iostream>
// #include<utility>
#include<vector>
using namespace std;

int main(){
    pair<int, int> p = {1, 2};
    cout << p.first << endl; // 1
    cout << p.second << endl; // 2
    // with different datatypes
    pair<char, int> pr = {'a', 1};
    cout << pr.first << endl; // a
    cout << pr.second << endl; // 1
    // We can also use pair as a datatype as well and pass it as one while creating it
    pair<int, pair<char, int>> pai = {5, {'b', 7}};
    cout<< pai.first << endl; // 5
    cout << pai.second.first << endl; // b
    cout << pai.second.second << endl; // 7
    // We can also create a vector of pair
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    // for(pair<int, int> p: vec){
    vec.push_back({5,6}); //assumes we already made a pair earlier 
    vec.emplace_back(6, 7); // creates in-place objects
    for(auto p: vec){ // or use auto
        cout << p.first << " " << p.second << " " << endl; // 1 2, 2 3, 3 4, 4 5
    }
    return 0;
}