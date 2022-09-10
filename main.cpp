#include<iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    a=10;
    p = &a;
    cout<< *p <<endl;
    *p = 20;
    cout <<"a = "<<a<<endl;
    return 0;
}