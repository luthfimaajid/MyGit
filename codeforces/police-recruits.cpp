#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;
    cin>>n;
    int x = 0;
    int unt = 0;

        for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if(a==-1){
            if(x>0){
                x--;
            }else{
                unt++;
            }
        }else{
           x+=a;
        }
    }

    cout<< unt<<endl;
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