#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
const unsigned int M = 1000000007;
 long long int p=1,i,n,a[1000];
 cin>>n;
 for(i=0;i<n;i++)
     cin>>a[i];
 for(i=0;i<n;i++)
     p=(p*a[i])%M;
 cout<<p;
}
        
        
   
