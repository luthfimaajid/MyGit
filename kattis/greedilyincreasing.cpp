#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)

void solve(){
    int n, max, count=1; 
    cin>>n;
    int x[n];
    vector<int> z;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    max=x[0];

    z.push_back(max);
    for(int i=1; i<n; i++){
        if(x[i]>max){
            //z.push_back(x[i-1]);
            
            max=x[i];
            z.push_back(max);
        }
    }
    cout<<z.size()<<endl;
    for(auto j:z){
        cout<<j<<" ";
    }
    cout<<endl;
    




}

int main(){
    ios_base::sync_with_stdio(0);
   
    solve();
    
    return 0;
}   





































