#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    int i,n;
    cin>>n;
    for(=1;i<=n;i++)
    {
        int sh,sm,eh,em;
        cin>>sh;
        cin>>sm;
        cin>>eh;
        cin>>em;
        int h,m;
        h=eh-sh;
        m=em-sm;
        if(m<0)
        {
            h=h-1;
            m=(60-sm)+em;
        }
        cout<<h<<" "<<m;
    }
}
        
