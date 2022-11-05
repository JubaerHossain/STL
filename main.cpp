#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std; 

int main()
{
    
    map<string, int> m;


    m["a"] = 21; // map do not allow duplicate keys
    m["c"] = 33; // map do ascending order by default with respect to keys
    m["b"] = 2;
    m["d"] = 47;
    m["e"] = 50;
    m["e"] = 55;
    cout << "Size of map is " << m.size() << endl;
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    // insertion in map
    pair<string, int> p;
    p.first = "f";
    p.second = 100;
    m.insert(p);

    // another way of insertion in map

    m.insert(make_pair("g", 200));


    // another way of insertion in map

    m["h"] = 300;

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    


    // search in map
    string key = "h";
    if (m.count(key) == 0)
    {
        cout << key << " is not present" << endl;
    }
    else
    {
        cout << key << " is present" << endl;
    }

    
    return 0;
}