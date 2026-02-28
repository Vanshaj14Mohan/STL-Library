//In this we would look into next permutation algorithm in C++:
// Also min and max element
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s<< endl; // acb
    string sr = "abcd";
    prev_permutation(sr.begin(), sr.end()); // dcba
    cout << sr << endl;
    vector<int> vec = {1, 2, 5, 7, 9, 10};
    cout << "Max element: " << *max_element(vec.begin(), vec.end()); // 10
    cout << endl;
    cout << "Min element: " << *min_element(vec.begin(), vec.end()); // 1
    cout << endl;
    // Performing binary search on this vector:
    cout << "Binary search output: " << binary_search(vec.begin(), vec.end(), 9); // return 1 if exist or 0 if not exist
    cout << endl;
    // Using Count Set Bits, returns the bits
    int l = 15;
    long int m = 15;
    long long int n = 15;
    cout << __builtin_popcount(l) <<endl; // 4
    cout << __builtin_popcountl(m) << endl; // 4
    cout << __builtin_popcountll(n) << endl; // 4
    return 0;
}