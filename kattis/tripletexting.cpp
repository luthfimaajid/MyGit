#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    string s;
    cin>>s;
    string x = s.substr(0, (s.size())/3);
    string y = s.substr(x.size(), (s.size())/3);
    string z = s.substr(y.size()+x.size(), (s.size())/3);

    if(x==y) cout<<x<<endl;
    else if(x==z) cout<<x<<endl;
    else if(z==y) cout<<z<<endl;

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