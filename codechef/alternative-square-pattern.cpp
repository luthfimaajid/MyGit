#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;
    cin>>n;

    ll a=1;
    for(int i=1; i<=n; i++){
        
        if(i%2){
            for(int j=a; j < (a+5); j++){
                cout<<j<<" ";
            }
        }else{
            for(int j=a+4; j >= a; j--){
                cout<<j<<" ";
            }
        }

        a+=5;
        cout<<endl;
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