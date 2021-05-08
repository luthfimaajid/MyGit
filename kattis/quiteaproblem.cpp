#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    string sent;
    while(getline(cin, sent)){
        for(int i=0; i<sent.size(); i++){
            sent[i] = tolower(sent[i]);
        }

        if(sent.find("problem") != string::npos){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }

        

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





































