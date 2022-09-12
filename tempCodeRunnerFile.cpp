t = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    l.sort();
    l.reverse();

    cout << endl;

    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;
    it++;
    it++;
    l.insert(it, 100);

    for ( it = l.begin(); it != l.end(); it++ )
        cout << *it << " ";
    cout << endl;