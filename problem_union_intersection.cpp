
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string>doc_1={"Data","is","the","new","oil","of","the","digital","economy"};
    list<string>doc_2={"Data","is","a","new","oil"};

    doc_1.sort();
    doc_2.sort();
    doc_2.merge(doc_1);
    doc_2.sort();
    doc_2.unique();

    cout<<"size = "<<doc_2.size();


    list<string>doc_3={"Data","is","the","new","oil","of","the","digital","economy"};
    list<string>doc_4={"Data","is","a","new","oil"};

    doc_3.sort();
    doc_4.sort();
    int count;
    for(string w1:doc_3)
    {
        for(string w2:doc_4)
        {
            if(w1==w2)
            count++;
        }
    }
    cout<<"\n size= "
    <<count;
    cout<<"\nJ(doc_1,doc_2)="
    <<(float)(count)/(float)(doc_2.size())<<endl;
}