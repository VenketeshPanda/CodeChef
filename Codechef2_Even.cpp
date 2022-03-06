#include<iostream>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,s=0,c=0;
         cin>>n;
         s=(n*(n+1))/2;
         if(s%2==0)
         {
            cout<<n<<endl;
            break;
         }
         else
         {  
             int m=n-1;
             s=(m*(m+1))/2;
            if(s%2==0)
            {
                cout<<m<<endl;
                break;
            }
            else
            {
                int k=m-1;
                s=(k*(k+1))/2;
                if(s%2==0)
                {
                    cout<<k<<endl;
                    break;
                }
            }
         }
            
     }
     return 0;
 }