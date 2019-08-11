#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
   int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int arr[26]={0},j,k,l;
        string a,b;
        cin>>a;
        cin>>b;
        for(j=0;j<a.length();j++)
        {
           arr[a[j]-'a']++; 
        }
        for(k=0;k<b.length();k++)
        {
           arr[b[k]-'a']--; 
        }
        long long int count=0;
        for(l=0;l<26;l++)
            count+=abs(arr[l]);
        if(count==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
   
    
}
