#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
   int i,d,t=0;
    cin>>d;
    for(i=1;i<=d;i++)
    {
        int c,r,x;
        cin>>r;
        cin>>x;
        c=(44*r)/7;
        if(c<=100*x)
            t++;
    }
    cout<<t;
}
        
        
   
