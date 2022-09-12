#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

int main()
{
    pair<string, int> p;

    p.first = "Hello";
    p.second = 10;

    cout << p.first << " " << p.second << endl;

    // pair of pairs

    pair<string, int> p2;

    p2 = make_pair("Hello", 10);

    cout << p2.first << " " << p2.second << endl;

    // use of pair in vector

    vector<pair<int, string>> v;

    v.push_back(make_pair(1, "Hello"));
    v.push_back(make_pair(2, "World"));
    v.push_back(make_pair(3, "C++"));



    for (auto x : v)
    {
        cout << x.first << " => " << x.second << endl;
    }

      return 0;
}