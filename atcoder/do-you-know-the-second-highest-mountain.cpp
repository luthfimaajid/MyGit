#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;
    cin>>n;

    vector<pair<int, string>> vp;

    for(int i=0; i<n; i++){
        string s;
        int a;
        cin>>s>>a;
        vp.push_back(make_pair(a,s));
    }

    sort(vp.begin(), vp.end());

    cout<<vp[vp.size()-2].second<<endl;

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