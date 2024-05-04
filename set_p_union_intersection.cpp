#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
#include<set>

using namespace std;

int main()
{
    set<string>doc_1{"Data","is","the","new","oil","of","the","digital","economy"};
    set<string>doc_2{"Data","is","a","new","oil"};
    set<string>common_list;
    doc_1.merge(doc_2);

    doc_1.size();
    cout<<"size = "<<doc_1.size();

    set_intersection
    (
        doc_1.begin(),doc_1.end(),
        doc_2.begin(),doc_2.end(),
        inserter(common_list,common_list.begin())
    );

    cout<<"\nsize = "<<common_list.size();
    cout<<"\nJ(doc_1,doc_2 = )"<<(float)common_list.size()/(float)doc_1.size();
}