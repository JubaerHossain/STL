#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include<iterator>
using namespace std; 

int main()
{
    vector<int> v = {60, 20, 40, 30, 50};
    vector<int>::iterator it;
    // sorting the vector
    sort(v.begin(), v.end());
    // printing the vector
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}