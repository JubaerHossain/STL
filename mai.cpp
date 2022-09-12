#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);

    l.push_back(200);
    l.push_back(30);
    l.push_front(4);
    l.push_back(4);

    list<int>::iterator it = l.begin();

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    l.sort();
    l.reverse();

    cout << endl;

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;
    it++;
    it++;
    l.insert(it, 100);

    for ( it = l.begin(); it != l.end(); it++ )
        cout << *it << " ";
    

    return 0;
}