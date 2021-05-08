#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    ull n,k;
    cin>>n>>k;

    for(auto i=0; i<k; i++){
        if(n%200==0){
            n = n /200;
        }else{
           string str = to_string(n);
           str.append("200");
            n = stol(str);
        }
    }

    cout<<n<<endl;
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