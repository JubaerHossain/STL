#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    queue<string> s;
    s.push("Hello");
    s.push("World");
    s.push("!");
    while (!s.empty())
    {
        cout << s.front() << endl;
        s.pop();
    }

    return 0;
}