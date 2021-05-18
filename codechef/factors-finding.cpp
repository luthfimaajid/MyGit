#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;
    cin>>n;
    vector<int> x;

    for(auto i=1; i<=n; i++){
        if(!(n%i)){
            x.push_back(i);
        }
    }

    cout<<x.size()<<endl;
    for(auto i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
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