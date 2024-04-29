/*Given two strings s1 and s2, let us assume that while typing the strings there were some backspaces
encountered which are represented by #. The task is to determine whether the resultant strings after processing the
backspace character would be equal or not.*/

#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter string 1: ";
    cin>>str1;
    cout<<"Enter string 2: ";
    cin>>str2;

    queue<char>qu1,qu2;

    for(char ch:str1)
    {
        if(ch=='#'){
            qu1.pop();
        }
        else{
            qu1.push(ch);
        }
    }

    for(char ch:str2)
    {
        if(ch=='#'){
            qu2.pop();
        }
        else{
            qu2.push(ch);
        }
    }

    bool flag=true;
    while(!qu1.empty() && !qu2.empty())
    {
        if(qu1.front() != qu2.front()){
            flag=false;
        }
        qu1.pop();
        qu2.pop();
    }

    if(flag==true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}