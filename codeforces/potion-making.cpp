#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)
#define min(x,y) ((x<y) ? (x):(y))

void solve(){
    int n;
    cin>>n;
    int x[n];

    for(int i=0; i<n; i++){
        cin>>x[i];
    }

    for(int i=0; i<n; i++){
        int fpb = 100;
        int min = min(x[i], 100-x[i]);
        for(int j=min; j > 0; j--){
            if((x[i] % j == 0) && ((100-x[i]) % j == 0)){
                fpb = j;
                break;
            }
            
        }

        int percent =   x[i]/fpb + (100-x[i])/fpb;

        cout<<percent<<endl;
        
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