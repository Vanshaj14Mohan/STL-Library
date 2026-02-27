// In this part we would look into unordered map in C++
// In unordered map you can't have duplicate keys:
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;
    m.emplace("TV", 100);
    m.emplace("TV", 100);
    m.emplace("Laptop", 90);
    m.insert({"Fridge", 50});
    m.emplace("Lamp", 50);
    for(auto p: m){ // would not arrange the keys in sorted order here as it was doing in multimap
        cout << p.first << " "<< p.second<<endl; // would only show 1 TV entry not two
    }
    cout << endl;
    m.erase(m.find("Lamp")); // Deleting Lamp from map
    for(auto p: m){
        cout << p.first << " " << p.second << endl; // Lamp would be deleted:
    }
    return 0;
}