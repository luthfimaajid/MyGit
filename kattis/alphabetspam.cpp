#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    string s;
    float ws=0, ls=0, us=0, sym=0;
    cin>>s;
    for(int j=0; j<s.size(); j++){
        if(s[j]=='_'){
            ws++;
        }else if(!isalpha(s[j])){
            sym++;
        }else if(isupper(s[j])){
            us++;
        }else{
            ls++;
        }
    }

    cout<<koma(10)<<ws/s.size()<<endl<<ls/s.size()<<endl<<us/s.size()<<endl<<sym/s.size()<<endl;

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