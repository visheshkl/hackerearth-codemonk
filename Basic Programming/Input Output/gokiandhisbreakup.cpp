#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
   long long int i,n,x;
   cin>>n;
   cin>>x;
   long long int a[n];
   for(i=0;i<n;i++)
       cin>>a[i];
   for(i=0;i<n;i++)
   {
       if(a[i]>=x)
           cout<<"YES"<<endl;
       else
           cout<<"NO"<<endl;
    }
   
   
   
    
}
