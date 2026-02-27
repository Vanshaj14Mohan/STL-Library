#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[] = {5, 2, 8, 7, 4};
    sort(arr, arr+ 5);
    // for descending order:
    // sort(arr, arr+5, greater<int>()); // would sort in descending order
    for(int val: arr){
        cout << val << " "; // 2 4 5 7 8 
    }
    cout << endl;
    // Same with vectors
    vector<int> vec = {3, 2, 1, 7, 6, 9};
    sort(vec.begin(), vec.end());
    for(int val: vec){
        cout << val << " "; // 1 2 3 6 7 9 
    }
    cout<< endl;
    // for descending order:
    //sort(vec.begin(), vec.end(), greater<int>()); // would sort in descending order
    vector<pair<int, int>> vc = {{2,5}, {8,6}, {7,9}, {4,8}};
    sort(vc.begin(), vc.end());
    for(auto p: vc){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}