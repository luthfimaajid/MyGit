#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long

void solve(){
    ull z = 1;
    ull sumsum=0, sumev=0, sumod=0;
    ull x,y;
    int sum=0, even=0, odd=0;

    cin>>x>>y;
    
    cout<<x<<" ";

    while(even<y){

        if(!(z>y))
        sumsum+=z;

        if (z%2==0){
            sumev+=z;
            even++;
            //cout<<even<<endl;
        }else{
            sumod+=z;
            odd++;
            //cout<<odd<<endl;
        }

        z++;
    }

    
    cout<<sumsum<<" "<<sumod<<" "<<sumev<<endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    int n=1; 
    cin>>n;

    for(auto i=0; i<n; i++){
        solve();
    }

    return 0;
}   