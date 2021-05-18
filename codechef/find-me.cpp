#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n,k;
    cin>>n>>k;
    int x[n];
    for(auto i=0; i<n; i++){
        cin>>x[i];
    }

    for(int i=0; i<n; i++){
        if(x[i]==k){
            cout<<1<<endl;
            return;
        }
    }

    cout<<-1<<endl;

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