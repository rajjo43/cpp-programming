#include<iostream>
#include<set>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string doc_1;
    string doc_2;
    cout<<"Enter 1st string: ";
    getline(cin,doc_1);
    cout<<"Enter 2nd string: ";
    getline(cin,doc_2);

    set<string>d_1;
    set<string>d_2;
    set<string>common_list;

    stringstream s(doc_1);
    string eachword;
    while(s>>eachword)
    {
        d_1.insert(eachword);
    }

    stringstream ss(doc_2);
    string word;
    while(ss>>word)
    {
        d_2.insert(word);
    }

    d_1.merge(d_2);
    cout<<"size=  "<<d_1.size();

    set_intersection
    (
        d_1.begin(),d_1.end(),
        d_2.begin(),d_2.end(),
        inserter(common_list,common_list.begin())
    );
    cout<<"\nsize= "<<common_list.size();
    cout<<"\nJ(doc_1,doc_2)=  "<<(float)common_list.size()/(float)d_1.size()<<endl;

}