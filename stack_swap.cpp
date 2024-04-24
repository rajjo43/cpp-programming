#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>stack1;
    stack<int>stack2;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);

    stack2.push(6);
    stack2.push(7);
    stack2.push(8);
    stack2.push(9);

    stack1.swap(stack2);

    cout<<"stack1= ";
    while(!stack1.empty())
    {
        cout<<stack1.top()<<" ";
        stack1.pop();
    }

    cout<<"\nstack2= ";
    while(!stack2.empty())
    {
        cout<<stack2.top()<<" ";
        stack2.pop();
    }
}