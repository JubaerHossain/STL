#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 
int sum(int a, int b);

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a ;
    cout << "Enter two numbers: ";
    cin >> b ;

    cout << "Sum is : " << sum(a, b) << endl;


    return 0;
}

int sum(int a, int b)
{
    return a + b;
}