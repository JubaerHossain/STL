#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    s.erase(2);
    cout << "After erasing 2" << endl;
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
        cout << endl;

     s.erase(s.begin());

    cout << "After erasing first element" << endl;

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;


    return 0;
}