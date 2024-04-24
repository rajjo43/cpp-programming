#include<iostream>
#include<list>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     list<string>doc_1={"Data","is","the","new","oil","of","the","digital","economy"};
    list<string>doc_2={"Data","is","a","new","oil"};


    doc_1.sort();
    doc_1.merge(doc_2);
    doc_1.sort();
    doc_1.unique();
    doc_1.size();

    cout<<"size = "<<doc_1.size();

    list<string>doc_3={"Data","is","the","new","oil","of","the","digital","economy"};
    list<string>doc_4={"Data","is","a","new","oil"};
    doc_3.sort();
    doc_4.sort();
    list<string>common_list;

    set_intersection(
    doc_3.begin(),doc_3.end(),
    doc_4.begin(),doc_4.end(),
    back_inserter(common_list)
   );
    
    common_list.sort();
    common_list.size();
    cout<<"\nsize = "<<common_list.size();
    cout<<"\nJ(doc_1,doc_2 = )"<<(float)common_list.size()/(float)doc_1.size();
}
