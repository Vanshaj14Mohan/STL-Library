// In this we would look into reverse algorithm in C++:
#include<iostream>
#include<vector>
#include<algorithm> // Used for reversing
using namespace std;

int main(){
    vector<int> v = {2, 5, 7, 9, 10};
    for(auto val: v){
        cout << val << " "; // 2 5 7 9 10
    }
    cout << endl;
    // For reversing for a particular range
    cout << "For a particluar range: " << endl;
    reverse(v.begin() + 1, v.begin()+3); // same logic can be applied in sorting
    for(auto val: v){
        cout<< val << " ";
    }
    cout << endl;
    cout << "After reversing: " << endl;
    reverse(v.begin(), v.end());
    for(auto val: v){
        cout << val << " "; // 10 9 7 5 2
    }
    cout<< endl;
    return 0;
}