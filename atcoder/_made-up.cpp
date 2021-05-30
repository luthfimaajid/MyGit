#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n;
    cin>>n;
    int a[n], b[n], c[n];

    set<int> pre;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    for(int i = 0; i<n; i++){
        cin>>b[i];
    }

    for(int i = 0; i<n; i++){
        cin>>c[i];
        pre.insert(c[i]);
    }


    int sum =0;
    for(int i=0; i<n; i++){
       for(auto j : pre){
                // printf("a[i]: %d, c[j]: %d, b[c[j]]: %d\n", a[i], c[j], b[c[j]-1]);
                printf("j: %d\n", j);
           if(a[i] == b[j-1]){
                printf("pair\n");
               sum++;
           }
       } 
    }
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