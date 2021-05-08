#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    int x,y,z,count=0;
    cin>>x>>y;
    bool same[x] = {false};

    for(int i=0; i<y; i++){
        cin>>z;
        
        same[z]=true;
    }


    for(int i=0; i<x; i++){
        if(!same[i]){
            cout<<i<<endl;
        }else{
            count++;
        }
    }

    printf("Mario got %d of the dangerous obstacles.\n", count);


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





































