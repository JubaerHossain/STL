#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int> pq;
    pq.push(10);
    pq.push(40);
    pq.push(20);
    pq.push(30);

    cout << endl;

    cout << "print the max element  : " << pq.top() << endl;
    cout << "after pop of top" << endl;
    pq.pop();
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    cout << "print the all element  : " << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}