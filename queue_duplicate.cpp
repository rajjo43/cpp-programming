/*Given a string, str, the task is to remove all the duplicate adjacent characters from the given string.

Input: str= “azxxzy”
Output: ay*/

#include<iostream>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<char>qu1;
    stack<char>stk1,stk2;
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);

    for(char ch:str)
    {
        if(stk1.empty() || ch!=stk1.top()){
            stk1.push(ch);
        }
        else{
            stk1.pop();
        }
    }

    while(!stk1.empty())
    {
        stk2.push(stk1.top());
        stk1.pop();
    }

    while(!stk2.empty())
    {
        qu1.push(stk2.top());
        stk2.pop();
    }

    if(qu1.empty())
    {
        cout<<"Empty string"<<endl;
    }

    while(!qu1.empty())
    {
        cout<<qu1.front()<<" ";
        qu1.pop();
    }
    return 0;
}