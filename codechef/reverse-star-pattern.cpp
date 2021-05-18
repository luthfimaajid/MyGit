#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=n-1; j>-1; j--){
            if(j>i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
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