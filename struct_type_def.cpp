#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std; 

typedef struct Point
{
    int x;
    int y;
} p;

int main()
{
    p p1;
    p1.x = 10;
    p1.y = 20;
    cout <<"p1.x = "<<p1.x<<endl;
    cout <<"p1.y = "<<p1.y<<endl;
    p p2 = {30, 40};
    cout <<"p2.x = "<<p2.x<<endl;
    cout <<"p2.y = "<<p2.y<<endl;
    p p3 = p2;
    
    return 0;
}