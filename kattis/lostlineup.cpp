#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;

    int n, x;
   
    cin>>n;
    int addr1[n];
    for(int i=2; i<=n; i++){
        cin>>x;
        addr1[x]=i;
    }

    cout<<1<<" ";
    for(int i=0; i<n-1; i++){
        cout<<addr1[i]<<" ";
    }
    cout<<endl;


    

    

    


    return 0;
}   