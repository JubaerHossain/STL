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

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}