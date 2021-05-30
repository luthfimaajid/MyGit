#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int g;
        cin>>g;
        int count = 1;
        for(int k = 1; k <g; k++) {
            int sum = k;
            // printf("k: %d\n", k);
            for(int j = 1; sum <= g; j++){
                sum += (k+j);
                if(sum==g){
                    // cout<<sum<<endl;
                    count++;
                }
            }
        }

        printf("Case #%d: %d\n", i+1, count);
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