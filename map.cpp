#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int>priceMap;
    priceMap.insert({"Avocado",80});
    priceMap.insert(make_pair("Mango",70));
    priceMap["Melon"]=90;

    for(auto map:priceMap)
    {
        cout<<map.first<<' '<<map.second<<'\n';
    }
    return 0;
}