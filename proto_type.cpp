#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include<iterator>
using namespace std; 

int main()
{
    vector<int> v;
    vector<int>::iterator it;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);


    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it <<endl;
    }
    cout << "v.size() = " << v.size() <<endl;
    cout << "v.capacity() = " << v.capacity() <<endl;
    cout << "v.max_size() = " << v.max_size() <<endl;
    cout << "v.front() = " << v.front() <<endl;
    return 0;
}