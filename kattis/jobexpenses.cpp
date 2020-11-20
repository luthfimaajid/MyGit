#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int n,x,max=0;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<0){
            max+=abs(x);
        }
    }
    cout<<max<<endl;


    return 0;
}   