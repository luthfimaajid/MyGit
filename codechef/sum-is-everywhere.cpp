#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;

    cin>>n;

    ll odd = 0;
    ll even = 0;
    for(int i=1;i<=n*2;i++){
        if(i%2){
            odd+=i;
        }else{
            even+=i;
        }
    }

    cout<<odd<<" "<<even<<endl;
    
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