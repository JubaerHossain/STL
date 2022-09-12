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

      return 0;
}