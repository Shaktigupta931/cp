
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii ,ii> iii;
typedef long long ll;
int main()
{
  ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
       long long  int mx=v[0];
        long long int sum=0;
        for(int i=1;i<n;i++)
        {
            if(mx>v[i])
                {
                sum+=(mx-v[i]);
                }
            else
            {
                mx=v[i];

            }
        }
        cout<<sum;



}
