#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    string s;
    int i,count=0;
    cin>>s;
    for(i=0;i<s.length();i++)
        count+=s[i]-'a'+1;
    cout<<count;
}
