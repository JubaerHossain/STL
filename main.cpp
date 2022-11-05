#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include<iterator>
using namespace std; 

int main()
{
    vector<int> v = {60, 20, 40, 30, 50};

    // Sort the vector in ascending order
    for (auto  it =  v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    
    
    cout << endl;

    cout << "The minimum element is " << *min_element(v.begin(), v.end()) << endl;
    cout << "The maximum element is " << *max_element(v.begin(), v.end()) << endl;

    return 0;
}