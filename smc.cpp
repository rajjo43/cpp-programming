#include<iostream>
#include<string>
using namespace std;

int main()
{
    string binary1,binary2;
    int s1,s2,f01=0,f10=0,f00=0,f11=0;

    cout<<"Enter first binary string:\n";
    cin>>binary1;

    cout<<"Enter second binary string:\n";
    cin>>binary2;

    s1=binary1.size();
    s2=binary2.size();

    for(int i=0,j=0;i<s1,j<s2;i++,j++)
    {
        
        if(binary1[i]=='0' && binary2[j]=='1'){
            f01++;
        }

        else if(binary1[i]=='1' && binary2[j]=='0'){
            f10++;
        }

        else if(binary1[i]=='0' && binary2[j]=='0'){
            f00++;
        }

         else if(binary1[i]=='1' && binary2[j]=='1'){
            f11++;
        }
    }

    cout<<"f01= "<<f01<<endl;
    cout<<"f10= "<<f10<<endl;
    cout<<"f00= "<<f00<<endl;
    cout<<"f11= "<<f11<<endl;

    cout<<"SMC= "
    <<(float)(f11+f00)/(float)(f01+f10+f11+f00)
    <<endl;

    return 0;
}