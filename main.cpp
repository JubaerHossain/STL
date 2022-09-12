#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std; 

int main()
{

    set<int> s;
    set<int>::iterator it;

    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(5);

    cout << s.size() << endl;

    cout << "s contains: " << endl;


    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    // find 3 in the set
    it = s.find(3);

    cout << "3 is in the set = ";
    cout << *it << endl;

    // erase 3 from the set
    s.erase(it);

    cout << "s contains after 3 erase : " << endl;

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}