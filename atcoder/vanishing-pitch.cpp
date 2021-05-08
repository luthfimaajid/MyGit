#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int v,t,s,d;
    cin>>v>>t>>s>>d;

    if((d>=v*t)&&(d<=v*s)){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
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