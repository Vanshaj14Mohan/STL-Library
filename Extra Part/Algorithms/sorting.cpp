#include<iostream>
#include<algorithm> // required for sort
#include<vector>
using namespace std;

// Making a custom comparator
bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    else return false;    
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false; //both > & < case covered: 
    if(p1.first < p2.first) return true; // for equal case: 
    else return false;   
}

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
    cout << endl;

    // to sort on the basis of second value in a pair
    cout << "Sorting using custom comparator" << endl;
    vector<pair<int, int>> v = {{2,7}, {8,4}, {6,8}, {4,3}};
    sort(v.begin(), v.end(), comparator); // comparator to sort in descendiing order
    for(auto p: v){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    
    vector<pair<int, int>> vect = {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vect.begin(), vect.end(), comp);
    for(auto p: vect){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}