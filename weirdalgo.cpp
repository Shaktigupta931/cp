#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii ,ii> iii;
typedef long long ll;
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n;
        cin>>n;

        cout<<n<<" ";
        while(n!=1)
        {
            if(n&1)n=3*n+1;

            else n=n/2;
            cout<<n<<" ";

        }
    }
