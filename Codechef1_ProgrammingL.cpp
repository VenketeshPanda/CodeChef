#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,a1,b1,a2,b2,c=0;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if(a1==a || a1==b)
        {
            if(b1==b || b1==a)
                c=1;
        }
        if(a2==a || a2==b)
        {
            if(b2==b ||)
                c=2;
        }
    }
    return 0;
}