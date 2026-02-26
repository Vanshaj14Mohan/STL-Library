// In this we will look into map 
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m; // this data is a pair kinda data; so we can iterate using pair
    m["tv"] = 100;
    m["laptop"] = 50;
    m["bed"] = 50;
    m["phone"] = 150;
    m["watch"] = 90;
    //m.erase("tv"); // tv would be erased fromm the map 
    // Inserting elements in map, using insert and emplace
    m.insert({"camera", 90});
    m.emplace("shoes", 90);
    //Iterating over map, 
    for(auto p: m){
        cout << p.first << " " << p.second << endl; // would sort them in ascending order:(of keys)
    }
    cout << "Map Size: " << m.size() << endl; // 7
    // checking count
    cout << "Count for laptop key: " << m.count("laptop") <<endl; // 1; returns the number of keys that exist in our map
    // and to print it's value
    cout << "Count of laptop values: " << m["laptop"] << endl; // 50;
    // checking if map is empty or not
    cout << "checking if map is empty or not: " << m.empty() << endl; // return 0 as non empty
    if(m.find("watch") != m.end()){
        cout << "Watch found:\n";
    }
    else{
        cout << "Not found\n";
    }
    return 0;
}