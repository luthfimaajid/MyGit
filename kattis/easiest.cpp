#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


int sumdig(ull x){
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

void solve(){
    ull i, j, dgta=0, dgtb=0;
    cin>>i;
    while(i!=0){
        dgta=0;
        dgtb=1;
        j = 11;
        while(dgta!=dgtb){
            
           
            dgta=sumdig(j*i);
        
            dgtb=sumdig(i);
           
            ++j;
        }

        cout<<j-1<<endl;

        cin>>i;
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