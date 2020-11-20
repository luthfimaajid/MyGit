#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,z=0;
    float y=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x==-1){
            continue;
        }else{
            y+=x;
            z++;
        }
    }
    printf("%.17f\n", y/z);


    return 0;
}