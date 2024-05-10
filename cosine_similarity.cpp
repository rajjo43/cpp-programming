#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include<sstream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    map<string,int>D1,D2;
    string document1="the best data science course";
    string document2="data science is popular";

    //taking and counting words from document1
    stringstream ss1(document1);
    string eachword1;
    while(ss1>>eachword1){
        D1[eachword1]++;
    }

    //taking and counting words from document2
    stringstream ss2(document2);
    string eachword2;
    while(ss2>>eachword2){
        D2[eachword2]++;
    }

    //getting the products
    double dotProduct = 0.0;
    double mag1 = 0.0;
    double mag2 = 0.0;

    //calculating dotProducts
    for(auto it = D1.begin();it!=D1.end();++it){
        dotProduct = dotProduct + (it->second * D2[it->first]);
    }

    //calculating magnitude1
     for(auto it = D1.begin();it!=D1.end();++it){
        mag1 += it->second * it->second;
    }

    //calculating magnitude2
     for(auto it = D2.begin();it!=D2.end();++it){
        mag2 += it->second * it->second;
    }
    mag1=sqrt(mag1);
    mag2=sqrt(mag2);

    if(mag1==0 || mag2==0){
        cout<<"Cosine similarity: Undefined (one or both magnitudes are zero)"<<endl;
    }
    else{
        cout<<"dot product : "<<dotProduct<<endl;
        cout<<"Magnitude 1 : "<<mag1<<endl;
        cout<<"Magnitude 2 : "<<mag2<<endl;
        double similarity = dotProduct/(mag1 * mag2);
        cout<<"Cosine similarity : "<<similarity<<endl;
        double theta = (acos(similarity)) * (180/3.1416);
        cout<<"Theta : "<<theta<<endl;
    }

    return 0;
}
