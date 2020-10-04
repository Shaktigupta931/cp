#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
    	long long int n,s;
    	cin>>n>>s;
    	if(n==s) cout<<"0\n";
    	else
    	{
    		long long int d=n;
    		long long int c=0;
    		while(d>0)
    		{
    			c++;
    			d=d/10;
    		}
         c=c+1;
         long long int z=(long long int) (pow(10,c))-n;
         cout<<z<<"\n";

    	}
    }
}