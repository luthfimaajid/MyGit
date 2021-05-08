#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a==7){
        if(b==5){
            if(c==5){
                printf("YES\n");
                return;
            }
        }
    }else if(b==7){
        if(a==5){
            if(c==5){
                printf("YES\n");
                return;
            }
        }
    }else if(c==7){
        if(b==5){
            if(a==5){
                printf("YES\n");
                return;
            }
        }
    }

    printf("NO\n");
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