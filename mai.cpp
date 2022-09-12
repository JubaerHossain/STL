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
    cout << endl;
    // find the target number
    it = find(l.begin(), l.end(), 300);
    if (it == l.end()){
        cout << "not found" << endl;
    }
    else{
        cout << "found at :" << *it << endl;
    }


    cout << endl;

    // delete the target number
   
    it = find(l.begin(), l.end(), 30);
    l.erase(it);

    for ( it = l.begin(); it != l.end(); it++ )
        cout << *it << " ";

    

    return 0;
}