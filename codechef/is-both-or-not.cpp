#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;
    cin>>n;

    if((!(n%11)) && (!(n%5))){
        cout<<"BOTH"<<endl;
    }else if((!(n%11)) || (!(n%5))){
        cout<<"ONE"<<endl;
    }else{
        cout<<"NONE"<<endl;
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