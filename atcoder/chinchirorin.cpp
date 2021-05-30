#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int a, b, c;

    cin>>a>>b>>c;

    if (a==b) {
        cout<<c<<endl;
    } else if (a==c) {
        cout<<b<<endl;
    } else if (b==c) {
        cout<<a<<endl;
    } else {
        cout<<0<<endl;
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