#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>qu;
    qu.push(21);
    qu.push(22);
    qu.push(23);
    qu.push(24);

    qu.pop();

    while(!qu.empty())
    {
        cout<<qu.top()<<" ";
        qu.pop();
    }
}