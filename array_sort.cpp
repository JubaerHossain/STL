#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 

int main()
{
    int arr[8] ={ 8, 4, 2, 1, 23, 344, 12, 11};

    sort(arr, arr+8);

    for(int i=0; i<8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}