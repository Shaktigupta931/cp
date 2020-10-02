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
       int h= n/2;
       if((a==(h))||(b==(h))
       cout<<"Case #"<<i<<": "<<"Y"<<"\n";
       else
       cout<<"Case #"<<i<<": "<<"N"<<"\n";
       
       
   }
}
