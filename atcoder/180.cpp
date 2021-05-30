#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    string s;
    cin>>s;

    string ss = string(s.rbegin(), s.rend());

    for(int i=0; i<ss.length(); i++ ){
        if(ss[i] == '6'){
            ss[i] = '9';
        }else if (ss[i] == '9'){
            ss[i] = '6';
        }
    }

    cout<<ss<<endl;

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