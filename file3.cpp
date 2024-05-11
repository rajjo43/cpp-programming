#include<iostream>
#include<map>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    //opening and creating the files
    ofstream out("log.txt");
    ofstream out2("newmast.txt");
    ifstream infile("oldmast.txt");
    ifstream infile2("trans.txt");
    //setting a map
    map<int,float>m1;

    //putting all the lines from oldmast.txt to map1
    string line;
    while(getline(infile,line)){
        stringstream linestream(line);
        int key;
        float value;
        if(linestream>>key>>value){
            m1[key]=value;//insert key value pair into the map
        }
    }
    infile.close();//close the file after reading

    //prints the contents of the map
    cout<<"Map content:\n";
    for(const auto &pair :m1){
        cout<<pair.first<<" : "<<pair.second<<endl;
    }

    //putting the lines from trans.txt to line2 and compairing the lines with map1
    string line2;
    while(getline(infile2,line2)){
        stringstream linestream(line2);
        int key2;
        float value2;
        if(linestream>>key2>>value2){
            if(m1.find(key2) !=m1.end()){
                m1[key2] +=value2;//merging the value of map1
            }
            else{
                out<<"Unmatched transaction A/C No. "<<key2<<endl;
            }
        }
    }
    infile2.close();//close the file after reading
    out.close();

    for(const auto &pair : m1){
        out2<<pair.first<<"\t\t\t"<<pair.second<<"\n";
    }
    out2.close();

    return 0;
}