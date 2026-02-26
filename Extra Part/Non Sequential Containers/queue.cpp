// In this we will discuss about Queue data structure
// It work on FIFO Structure
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<< "Queue Size: " << q.size() << endl; // 3
    cout << "Checking empty queue: " << q.empty() << endl; // 0 as not empty as of now
    while(!q.empty()){
        cout<< q.front() << " "; // 1 2 3
        q.pop();
    }
    cout<<endl;
    cout<< "Queue Size: " << q.size() << endl; // 0, as elements have been popped out
    cout << "Checking empty queue: " << q.empty() << endl; // 1 as it is empty now
    // Try swapping queue values with other queues
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    queue<int>q2;
    q2.swap(q1);
    cout << "Queue 1 size: " << q1.size() << endl; // 0
    cout << "Queue 2 size: " << q2.size() << endl; // 4
    q2.emplace(5); // using emplace here: 
    cout << q2.back() << endl; // Last element => 5
    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}