#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,n,w,h,i;
    cin>>l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>w;
        cin>>h;
        if(w<l || h<l)
            cout<<"UPLOAD ANOTHER"<<endl;
        else if(w>=l && h>=l)
        {
            if(w==h)
                cout<<"ACCEPTED"<<endl;
            else
                cout<<"CROP IT"<<endl;
        }
                        
    }
    
}
