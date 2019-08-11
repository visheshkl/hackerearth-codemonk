#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    scanf("%s",&s);
    int i,len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        s[i]=s[i]-'a'+'A';
        else
        s[i]=s[i]-'A'+'a';    
    }
    printf("%s",s);
}
