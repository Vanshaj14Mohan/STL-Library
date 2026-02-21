#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "For Forward Loop Iterator " << endl;
    for(auto it = vec.begin(); it != vec.end(); it ++){
        cout << *(it) << " "; // *(it) as it is a iterator so de refencing so that to know where it is pointing and the value it holds
    }
    cout << endl;
    cout << "For Backward Loop Iterator " << endl;
    vector<int> data = {1, 2, 3, 4, 5};
    // Defining a reverse iterator in C++
    for(auto rev_it = data.rbegin(); rev_it != data.rend(); rev_it++){
        cout << *(rev_it) << " ";
    }
    cout << endl;
    return 0;
}