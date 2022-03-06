#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int m=min(b,c);
        int x=min(a,m);
        if(x==a)
            cout<<"Draw"<<endl;
        else if(x==b)
            cout<<"Bob"<<endl;
        else if(x==c)
            cout<<"Alice"<<endl;
    }
}