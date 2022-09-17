#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // binary search
    bool bsearch = binary_search(v.begin(), v.end(), 58);

    if (bsearch)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}