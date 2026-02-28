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
    cout << s<< endl;
    string sr = "abcd";
    prev_permutation(sr.begin(), sr.end());
    cout << sr << endl;
    vector<int> vec = {1, 2, 5, 7, 9, 10};
    cout << "Max element: " << *max_element(vec.begin(), vec.end());
    cout << endl;
    cout << "Min element: " << *min_element(vec.begin(), vec.end());
    // Performing binary search on this vector:
    
    return 0;
}