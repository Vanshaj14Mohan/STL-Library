// In this we would look into a special container named pair
#include<iostream>
// #include<utility>
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
    return 0;
}