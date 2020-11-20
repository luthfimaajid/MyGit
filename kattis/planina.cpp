#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,j=2;
    cin>>n;
    long long int max=0;
  

    for(int i = 0; i<n; i++){
        j+=(j-1);
    }

    cout<<j*j<<endl;
 

    return 0;
}