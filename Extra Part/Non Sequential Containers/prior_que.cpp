// In this we would discuss about Priority Queue: 
// we don't need to incluude any extra thing just queue would workout perfectly
#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> p;
    p.push(2);
    p.push(5);
    p.push(9);
    p.push(10);
    cout << "Checking size: " << p.size() << endl; // 4
    cout << "Checking if it's empty or not: " << p.empty() << endl; // 0 as not empty
    // Iterating in a priority_queue
    while(!p.empty()){
        cout << p.top() << " "; // 10 9 5 2 
        p.pop();
    }
    cout << endl;
    cout << "Checking if it's empty or not: " << p.empty() << endl; // 1 as now it is empty
    // Try swapping priority_queues with the same others
    priority_queue<int> p1;
    p1.push(7);
    p1.push(4);
    p1.emplace(5);
    priority_queue<int> p2;
    p2.swap(p1);
    cout << "p1 size: " << p1.size() << endl; // 0
    cout << "p2 size: " << p2.size() << endl; // 3
    while(!p2.empty()){
        cout << p2.top() << " "; // 7 5 4
        p2.pop();
    }
    cout << endl;
    // But if we want smaller element to come at top:
    priority_queue<int, vector<int>, greater<int>> revp;
    revp.push(10);
    revp.push(9);
    revp.emplace(8);
    while(!revp.empty()){
        cout << revp.top() << " "; // 8 9 10
        revp.pop();
    }
    return 0;
}