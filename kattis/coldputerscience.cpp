#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n, x, y=0;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<0){
            y++;
        }
    }

    cout<<y<<endl;

    return 0;
}