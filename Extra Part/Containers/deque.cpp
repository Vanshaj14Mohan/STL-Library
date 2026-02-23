// Implementing a Deque in C++:
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> de = {1,2, 3};
    for(int val: de){
        cout << val << " "; // 1 2 3
    }
    return 0;
}