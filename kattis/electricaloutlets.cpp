#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n, o, x, y=0;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>o;
        y=0;
        for(int j=0; j<o; j++){
            cin>>x;
            y+=(x-1);
        }
        cout<<y+1<<endl;
    }

    return 0;
}