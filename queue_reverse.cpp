/*Given a line of text, reverse the text without reversing the individual words.

For example,
Input: Technical Interview Preparation
Output: Preparation Interview Technical*/

#include<iostream>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>qu1,qu2;
    stack<string>stk;
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);

    stringstream s(str);
    string eachword;

    while(s>>eachword)
    {
        qu1.push(eachword);
    }

    while(!qu1.empty())
    {
        stk.push(qu1.front());
        qu1.pop();
    }

    while(!stk.empty())
    {
        qu2.push(stk.top());
        stk.pop();
    }

    while(!qu2.empty())
    {
        cout<<qu2.front()<<" ";
        qu2.pop();
    }
}