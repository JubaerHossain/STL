#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(2);
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

    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;

    s.clear();
    
    cout << "Size of the unordered set after clearing all the elements: " << s.size();

    return 0;
}