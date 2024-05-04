/*Write a program to calculate the frequency of each word in the given string
input=learning to code is learning to create and innovate */
#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cout<<"Enter the string: ";
    getline(cin,input);
    stringstream ss(input);
    string eachword;

    map<string ,int>Map;
    while(ss>>eachword){
        if(Map.find(eachword)==Map.end()){
            Map.insert(make_pair(eachword,1));
        }
        else{
            Map[eachword]++;
        }
    }

    for(auto str:Map){
        cout<<'\t'<<str.first<<'\t'<<str.second<<'\n';
    }
    return 0;
}