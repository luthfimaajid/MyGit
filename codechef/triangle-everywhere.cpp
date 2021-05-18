#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if ( (a+b<=c) || (a+c<=b) || (c+b<=a)){
        cout<<-1<<endl;
    }else{
        if( (a==b) && (b==c)){
            cout<<1<<endl;
        }else if( (a==b) || (a==c) || (b==c)){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
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