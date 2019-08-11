#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    long long int i;
    cin>>i;
    long long int t,count = 0; 
    while (i != 0) { 
        i = i / 10; 
        ++count; 
    }
    if(count==10)
    {
      for(int k=1;k<=10;k++)
        {
         t=k*(i%10); 
         i=i/10;
        }
        if(t%11==0)
            cout<<"Legal ISBN";
        else
            cout<<"Illegal ISBN";    
    }
    else
        cout<<"Illegal ISBN";
    
}
        
