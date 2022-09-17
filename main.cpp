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


    //LOWER BOUND

    auto it = lower_bound(v.begin(), v.end(), 5);

    cout << "Lower Bound of 5 is at position " << it - v.begin() << endl;


    //UPPER BOUND

    auto it2 = upper_bound(v.begin(), v.end(), 5);

    cout << "Upper Bound of 5 is at position " << it2 - v.begin() << endl;


    


    return 0;
}