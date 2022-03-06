#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c[3],x,y;
        int x1=1,y1=1;
        for(int i=0;i<3;i++)
            cin>>c[i];
        cin>>x>>y;
        for(int i=0;i<3;i++)
        {
            if(x==c[i])
                break;
            else    
                x1++;
            
             if(y==c[i])
                break;
            else    
                y1++;
        }
        if(x1>y1)
            cout<<y;
        else    
            cout<<x;
    }
}
