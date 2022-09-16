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

    // front
    while (!s.empty())
    {
        cout << s.front() << endl;
        s.pop();
    }

    cout << endl;

    // back

    queue<int> s2;

    s2.push(1);
    s2.push(2);
    s2.push(3);


    while (!s2.empty())
    {
        cout << s2.back() << endl;
        s2.pop();
    }

    return 0;
}