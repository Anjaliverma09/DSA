#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int> mapping;

    //insertion
    pair<string, int> p = make_pair("anjali", 20);  //using make_pair

    pair<string, int> q("Dipansh", 25);     //Using Constructor

    pair<string, int> r;        //Using Default Constructor
    r.first = "arun";
    r.second = 30;

    pair<string, int> s{"Riya", 35};        //Brace Initialization

    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    mapping.insert(s);
    mapping["verma"] = 100;     //another way of insertion

    cout << "Size: " << mapping.size() << endl;

    cout << mapping.at("Dipansh") << endl;
    cout << mapping["Riya"] << endl;

    cout << mapping.count("anjali") << endl;    //count fun return 1 if key exists otherwise returns 0
    
    cout << "Size: " << mapping.size() << endl;

    if(mapping.find("anjali") != mapping.end())
        cout << "Found" << endl;

    else cout << "Not found";

    cout << "Size: " << mapping.size() << endl;

    cout << mapping["Kumar"] << endl;   //new entry created
    cout << "Size: " << mapping.size() << endl;
         
   
   
    return 0;
}