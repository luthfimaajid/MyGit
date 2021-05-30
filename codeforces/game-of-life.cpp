#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

bool passive(vector<int> x, vector<int>y) {
    return x==y;
}

void solve(){
    int t;
    cin>>t;
    ll n,m;

    
    for (int i=0; i<t; i++) {
        cin>>n>>m;
        vector<int> x;
        int in;

        string str;
        cin>>str;
        for(int j=0; j<n; j++) {
            in = str[j] - '0';
            x.push_back(in);
        }


        for(int j=0; j<m; j++) {
            vector<int> y;
            for (int k=0; k<n; k++) {
                if ((x[k-1] == 1) xor (x[k+1] == 1)) {
                    y.push_back(1);
                } else if (x[k] == 1) {
                    y.push_back(1);
                } else {
                    y.push_back(0);
                }
            }

            if(passive(x, y)){
                break;
            }

            copy(y.begin(), y.end(), x.begin());
        }

        for(auto at : x) {
            cout<<at;
        }
        cout<<endl;
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