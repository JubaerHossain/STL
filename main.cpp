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
    l.push_back(4);
    // push for begin
    l.push_front(5);

    list<int>::iterator it = l.begin();

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;
    cout << "after sort" << endl;
    l.sort();

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;
    cout << "after reverse" << endl;
    l.reverse();

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";

    cout << endl;


    it++;
    it++;
    cout << "after insert 100" << endl;
    l.insert(it, 100);

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;
    // find the target number
    cout << "find 100" << endl;
    it = find(l.begin(), l.end(), 100);
    if (it == l.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found at :" << *it << endl;
    }

    cout << endl;

    // delete the target number
    cout << "delete 100" << endl;

    it = find(l.begin(), l.end(), 100);
    l.erase(it);

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";

    return 0;
}