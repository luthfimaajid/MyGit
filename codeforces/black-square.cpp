#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int a[4];
    string s;
    int sum=0;
    for(int i=0; i<4; i++){
        cin>>a[i];
    }

    cin>>s;
    for(int i=0; i<s.size(); i++){
        int id = s[i]-'0';
        sum += a[id-1];
    }

    cout<<sum<<endl;
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