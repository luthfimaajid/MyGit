#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    string s;
    string apx="";
    cin>>s;

    for(int i=0; i<s.size(); i++){

        if(s[i]==s[i+1]){
            apx+=s[i];
            while(s[i]==s[i+1]){
                i+=1;
            }
        }else{
            apx+=s[i];
        }
    }

    cout<<apx<<endl;

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