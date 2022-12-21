// Abhinav Choudhary B.tech CST (49)
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
void listDisplay(list<int> li)
{
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    cout << "STL vectors:\n";
    // Vector implementation...
    vector<int> v{1, 2, 3, 4};
    int a, i = 2;
    display(v);

    cout << "Enter 2 more elements to add to vector: ";
    while (i--)
    {
        cin >> a;
        v.push_back(a);
    }
    display(v);

    cout << "Change 1st element to 99\n";
    v.at(0) = 99;
    cout << "Pop last element.\n";
    v.pop_back();
    display(v);

    cout << "Insert an element at 2nd position\n";
    v.insert(v.begin() + 1, 44);
    display(v);

    cout << "Erase 3rd to last element\n";
    v.erase(v.begin() + 2, v.end());
    display(v);

    v.clear();
    cout << "Length after clear\n";
    cout << "Size: " << v.size() << endl;

    // list implementation
    cout << "\nSTL lists:\n";
    list<int> li;
    i = 2;
    cout << "Enter 2 elements to add from front : ";
    while (i--)
    {
        cin >> a;
        li.push_front(a);
    }
    listDisplay(li);
    i = 2;

    cout << "Enter 2 elements to add from back : ";
    while (i--)
    {
        cin >> a;
        li.push_back(a);
    }
    listDisplay(li);

    cout << "sorting the list\n";
    li.sort();
    listDisplay(li);

    cout << "popping last and first element\n";
    li.pop_back();
    li.pop_back();
    listDisplay(li);

    cout << "reverse list\n";
    li.reverse();
    listDisplay(li);

    return 0;
}
