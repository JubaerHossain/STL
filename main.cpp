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
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout << s.size() << endl;

    cout << "s contains: " << endl;


    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}