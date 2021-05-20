#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        ll n;
        cin>>n;
        vector<ll> x;

        if(n==2){
            cout<<1<<endl;
            continue;
        }
        ll temp = n & (n-1);        
        ll j;
        for(j = n-1; j > 1; j--){
            if((temp & j) == 0){
                break;
            }
            temp = temp & (j);
        }

        cout<<j<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    int n=1; 
    //cin>>n;

    for(auto i=0; i<n; i++){
        solve();
    }

    return 0;
}   