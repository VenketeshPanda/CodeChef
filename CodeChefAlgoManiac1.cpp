#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3;
        cin>>b1>>b2>>b3;
        if((a1+a2+a3)==(b1+b2+b3))
            cout<<"Pass"<<endl;
        else    
            cout<<"Fail"<<endl;
    }
    return 0;
}