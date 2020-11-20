#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,y;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x>>y;
        x=0;
        for(int j=1; j<=y;j++){
            x+=(j+1);
           
        }
        
        cout<<i<<" "<<x<<endl;
    }


    return 0;
}