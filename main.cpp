#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std; 

int main()
{
    
    multimap<string, int> m;
    m.insert({"a", 1});
    m.insert({"a", 2});
    m.insert({"a", 3});
    m.insert(make_pair("a", 1));

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // find the first element with key "a"

    if (m.find("a") != m.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    // find all elements with key "a"

    auto it = m.find("a");
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // erase all elements with key "a"

    cout << "Before erase: " << m.size() << endl;

    m.erase(m.begin());

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    


    

    
    return 0;
}