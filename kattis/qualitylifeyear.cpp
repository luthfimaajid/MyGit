#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n;
    cin>>n;
    float x;
    float y, max=0.0;

    for(int i =0; i<n;i++){
        cin>>x>>y;
        max+=(x*y);
    }

    printf("%.3f", max);

    return 0;
}