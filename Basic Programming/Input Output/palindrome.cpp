#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    string s;
    int t=1,i=0;
    cin>>s;
    int k=s.length()-1;
    while(i<k)
    {
        if(s[i++]!=s[k--])
        t=0;
    }
    if(t==0)
    cout<<"NO";
    else
    cout<<"YES";
    
}
