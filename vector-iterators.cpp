#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(4);

    cout<<"\nThe size of v is:  "
    << v.size()  
    <<"\nThe capacity of v is: "
    <<v.capacity()
    <<"\n"
    <<"Content of v is : \n";

    vector<int>::const_iterator itt;
    for(itt=v.begin(); itt!=v.end();itt++)
    {
        cout<< *itt <<",";
    }
    return 0;
}