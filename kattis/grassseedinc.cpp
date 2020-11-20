#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n;
    float a, x, y, price=0;;
    cin>>a>>n;

    for(int i=0; i<n; i++){
        cin>>x>>y;
        price+=(x*y);
    }
    printf("%.7f\n", a*price);


    return 0;
}