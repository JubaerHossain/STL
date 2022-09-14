#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std; 

int main()
{
    stack<string> s;
    s.push("Hello");
    s.push("World");
    s.push("!");
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    
    return 0;
}