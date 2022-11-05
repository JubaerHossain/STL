#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_multimap<int, int> m;
    m.insert({1, 2});
    m.insert({1, 3});
    m.insert({1, 4});
    m.insert({1, 5});
    m.insert({1, 5});
    m.emplace(1, 6);
    m.emplace(1, 6);
    cout << "Size of map is " << m.size() << endl;
    map<string, int>::iterator it;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    cout << "insert using pair" << endl;
    m.insert(make_pair(2, 3));
    m.insert(make_pair(2, 3));

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // find the element
    if (m.find(1) != m.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // erase the element
    cout << "Erase the element of first" << endl;
    m.erase(m.begin());
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    // erase the all index of element
    cout << "erase the 2 index of element" << endl;
    m.erase(2);
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // empty the map
    cout << "empty the map" << endl;
    m.clear();
    cout << "Size of map is " << m.size() << endl;

    // empty check
    if (m.empty())
    {
        cout << "Map is empty" << endl;
    }
    else
    {
        cout << "Map is not empty" << endl;
    }

    return 0;
}