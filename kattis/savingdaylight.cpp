#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    char month[20], day[4], year[5];
    int hr1, hr2, mn1, mn2;
    int min, mintot1, mintot2;

    while(scanf("%s %s %s %d:%d %d:%d", &month, &day, &year, &hr1, &mn1, &hr2, &mn2) != EOF){
        mintot1 = hr1*60+mn1;
        mintot2 = hr2*60+mn2;
        min = mintot2-mintot1;
        printf("%s %s %s %d hours %d minutes\n", month, day, year, min/60, min%60);
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





































