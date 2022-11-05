#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <list>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 2};
    next_permutation( v.begin(), v.end() );

    for (auto i : v)
        cout << i << " ";
    cout << endl;





    return 0;
}