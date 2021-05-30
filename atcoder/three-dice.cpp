#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


int x(int a){
    switch(a){
        case 1:
            return 6;
        case 4:
            return 3;
        case 3:
            return 4;
        case 2:
            return 5;
        case 5:
            return 2;
        case 6:
            return 1;
        default:
            return 0;
    }
}
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int sum =0;
    sum += x(a) + x(b) + x(c);
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