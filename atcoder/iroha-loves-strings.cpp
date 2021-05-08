#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n, l;
    cin>>n>>l;
    string buff;
    vector<string> s;

    for(int i=0; i<n; i++){
        cin>>buff;
        s.push_back(buff);
    }

    /*
    for(int i=1; i<n; i++){
        string temp = s[i];
        int j;
        for(j=0; j<i; j++){
            if(temp.compare(s[j]) < 0){
                break;
            }
        }
        s[i] = s[j];
        s[j] = temp;
    }
    */

    sort(s.begin(), s.end());

    for(int i=0; i<n; i++){
        cout<<s[i];
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