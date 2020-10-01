#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    for (int casee = 0; casee < t; casee ++)
    {
        ll n;
        cin>>n;
        string I,O;
        cin>>I>>O;
        vector<vector<char>> adj(n, vector<char>(n));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if(i==j){
                    adj[i][j]='Y';
                }
                else if(j>i){
                    if(adj[i][j-1]=='Y' && O[j-1]=='Y' && I[j]=='Y'){
                        adj[i][j]='Y';
                    }else{
                        adj[i][j]='N';
                    }
                }else{
                    if(adj[i-1][j]=='Y' && O[i]=='Y' && I[i-1]=='Y'){
                        adj[i][j]='Y';
                    }else{
                        adj[i][j]='N';
                    }
                }
            }
            
        }
        cout<<"Case #"<<casee+1<<":"<<"\n";
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout<<adj[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}