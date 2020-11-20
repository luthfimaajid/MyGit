#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(abs(x)%2==0){
            printf("%d is even\n", x);
        }else{
            printf("%d is odd\n", x);
        }
    }

    return 0;
}   