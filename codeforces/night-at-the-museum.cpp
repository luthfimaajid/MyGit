#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    string s;
    cin>>s;

    int sum =0;
    char curr = 'a';
    for(int i=0; i<s.length(); i++){
        int c1, c2;
        c1 = c2 = 0;
        char temp = curr;
        while(curr!=s[i]){
            curr++;
            if(curr>'z'){
                curr='a';
            }
            c1++;
        }
        while(temp != s[i]){
            temp--;
            if(temp<'a'){
                temp='z';
            }
            c2++;
        }

        (c1 > c2) ? sum+=c2:sum+=c1;

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