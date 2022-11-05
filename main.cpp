#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std; 

int main()
{
    deque<string> dq;
    dq.push_back("a");
    dq.push_back("b");
    dq.push_back("c");

    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << *it << endl;


    // pop
    dq.pop_front();
    cout << "after front pop" << endl;
    
    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << *it << endl;
    dq.pop_back();

    cout << "after back pop" << endl;    
    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << *it << endl;


    // empty

    if (dq.empty())
        cout << "dq is empty" << endl;
    else
        cout << "dq is not empty" << endl;

    // size

    cout << "dq size is " << dq.size() << endl;

    // clear

    dq.clear();

    if (dq.empty())
        cout << "dq is empty" << endl;
    else
        cout << "dq is not empty" << endl;



    

    
    return 0;
}