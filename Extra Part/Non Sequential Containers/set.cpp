// In this we would look into sets
// No duplicate values are allowed in sets
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.emplace(3);
    s.emplace(4);
    s.insert(5);
    cout << "Size of set " << s.size() << endl; // 5
    for(auto val: s){
        cout << val << " "; // 1 2 3 4 5
    }
    // Deleting 5 from set
    auto it = s.find(5);
    if(it != s.end()){
        s.erase(it);
    }
    cout << endl;
    for(auto val: s){
        cout << val << " "; // 5 would be deleted
    }
    cout << endl;
    //Checking if set is empty or not
    cout << "Is set empty: " << s.empty() << endl; // 0 as it is not empty
    // using lower bound and upper bound
    set<int> s1;
    s1.emplace(1);
    s1.emplace(2);
    s1.emplace(4);
    s1.emplace(5);
    for(auto val: s1){
        cout << val << " ";
    }
    cout << endl;
    cout << "Lower Bound: " << *(s1.lower_bound(2)) << endl; // return 2 as 2 is present
    cout << "Lower Bound: " << *(s1.lower_bound(3)) << endl; // return 4 as 3 is not present
    cout << "Lower Bound: " << *(s1.lower_bound(6)) << endl; // we will get s1.end() here
    cout << "Lower Bound: " << *(s1.lower_bound(4)) << endl; // would return only 4 as lower bound
    cout<< "Upper Bound: " << *(s1.upper_bound(4)) << endl; // would return 5; upper bound condition
    // Using multiset and unordered set
    multiset<int> ms; // duplicates are allowed here in ascending order
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(2);
    ms.emplace(3);
    for(auto val: ms){
        cout << val << " "; // 1 1 2 3
    }
    cout << endl;
    // Using unordered set
    unordered_set<int> us; // only unique values but not necessary sorted
    us.emplace(1);
    us.emplace(1);
    us.emplace(1);
    us.emplace(2);
    us.emplace(3);
    for(auto val: us){
        cout << val << " "; // 3 2 1
    }
    return 0;
}