#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int a=count(s.begin(),s.end(),'A');
       int b=count(s.begin(),s.end(),'B');
       if((a==(n/2))||(b==(n/2)))
       cout<<"Case #"<<i<<": "<<"Y"<<"\n";
       else
       cout<<"Case #"<<i<<": "<<"N"<<"\n";
       
       
   }
}