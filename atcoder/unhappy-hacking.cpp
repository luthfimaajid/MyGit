#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    string s;
    vector<char> c;
    char buff;

    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i] != 'B'){
            c.push_back(s[i]);
        }else{
            if(!c.empty()){
                c.pop_back();    
            }
            
        }
    }

    for(char chr:c){
        cout<<chr;
    }

    cout<<endl;



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