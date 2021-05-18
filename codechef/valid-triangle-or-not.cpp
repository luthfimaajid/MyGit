#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b<c){
        cout<<"NO"<<endl;
        return;
    }
    if(a+c<b){
        cout<<"NO"<<endl;
        return;

    }
    if(b+c<a){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
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