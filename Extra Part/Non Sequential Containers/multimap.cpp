// In this part we will look into multimap
#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string, int> m;
    m.emplace("TV", 150);
    m.emplace("TV", 150);
    m.emplace("TV", 150);
    m.emplace("TV", 150);
    m.emplace("Phone", 100);
    m.insert({"Phone", 100});
    // m.erase("TV"); If we do this it would remove all existence of TV from the multimap
    m.erase(m.find("Phone")); // Only once instance of Phone would be visible
    for(auto p: m){
        cout << p.first << " " << p.second << endl; // 4 times TV 150, and 1 Phone 100 (ascending order)
    }
    return 0;
}
