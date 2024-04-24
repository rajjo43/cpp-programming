#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p="Dept. of CSE CU";

    stringstream s(p);
    string word;

    while(s>>word)
    {
        cout<<word<<endl;
    }

    return 0;
}