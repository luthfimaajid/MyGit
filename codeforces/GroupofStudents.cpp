#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int m;
    int tc = 0;
    cin>>m;
    int mc[m];
    for(int i=0; i<m; i++){
        cin>>mc[i];
        tc+=mc[i];
    }
    
    int x,y;
    int sum =0;
    int rate =0;
    cin>>x>>y;
    for(int i=m-1; i>-1; i--){
        sum+=mc[i];
        if((sum>=x) && (sum<=y) && (tc-sum>=x) && (tc-sum<=y)){
            rate = i+1;
            
            break;
        }
    }

    cout<<rate<<endl;

    

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