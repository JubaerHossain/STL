#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <iterator>
#include <string>
using namespace std; 

int main()
{
    deque<string> d;


    d.push_back("one");
    d.push_back("two");
    d.push_back("three");
    d.push_back("four");

    deque<string>::iterator it;

    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }

    cout <<"\n" << endl;
    cout <<"after pop_front \n" << endl;

    d.pop_front();

    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }
    cout <<"\n" << endl;
    cout <<"after pop_back \n" << endl;

    d.pop_back();

    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }

    cout <<"\n" << endl;
    cout <<"after erase \n" << endl;

    d.erase(d.begin(), d.begin()+1);

    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }

    // swap the contents of two deques

    deque<string> d1;
    d1.swap(d);

    cout <<"\n" << endl;
    cout <<"after swap \n" << endl;

    for (it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }

    // clear the deque

    d1.clear();

    cout <<"\n" << endl;
    cout <<"after clear \n" << endl;

    for (it = d1.begin(); it != d1.end(); it++)
    {
        cout << *it << endl;
    }



    return 0;
}