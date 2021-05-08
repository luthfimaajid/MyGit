#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int sum = 0;
    int n,k,x,y;
    cin>>n>>k>>x>>y;

    int i;
    for(i=1; i<=n; i++){
        if(i<=k){
            sum += x;
        }else{
            sum += y;
        }
        
        
    }

    cout<<sum<<endl;
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