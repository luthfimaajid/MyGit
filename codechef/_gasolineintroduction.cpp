#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    int n, x, y;
    cin>>n;
    int max[n];
    for(int i=0; i<n; i++){
        max[i]=0;
        cin>>x;
        for(int j=0; j<x;j++){
            cin>>y;
            max[i]+=y;
        }
        
    }
    for(int i=0; i<n; i++){
        cout<<max[i]<<endl;
    }


}

int main(){
    ios_base::sync_with_stdio(0);
   
    solve();
    
    return 0;
}   





































