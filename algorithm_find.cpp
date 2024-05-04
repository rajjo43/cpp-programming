#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<string>v;
    v.push_back("abc");
    v.push_back("xyz");

    if(std::find(v.begin(),v.end(),"xyz")!=v.end()){
        cout<<"Word found"<<endl;
    }
    else{
        cout<<"Word not found"<<endl;
    }

    return 0;
}