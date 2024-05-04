#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<char> b;
    b.insert('G');
    b.insert('H');
    b.insert('H');

    for (char st : b) 
    {
         cout << st << ' ';
    }
    cout << '\n';

    set<char, greater<char>> a;
    a.insert('G');
    a.insert('H');
    a.insert('H');

    for(char set:a)
    {
        cout<<set<<' ';
    }
    cout<<"\n";
    return 0;
}