#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int>priceMap;
    priceMap["avocado"]=90;
    priceMap["mango"]=80;
    priceMap["melon"]=70;

    for(auto map:priceMap){
        cout<<map.first<<" "<<map.second<<"\n";
    }

    map<string,int>::iterator itt;
    for(itt=priceMap.begin();itt!=priceMap.end();itt++){
        cout<<'\t'<<(*itt).first<<' '<<(*itt).second<<'\n';
    }

    map<string,int>::iterator itr;
    for(itr=priceMap.begin();itr!=priceMap.end();itr++){
        cout<<'\t'<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
    }
    return 0;
}