#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;

    int x,y;

    cin>>x>>y;
    while(x&&y != 0){
        printf("%d %d / %d\n", x/y, x%y, y);
        cin>>x>>y;
    }
    

    


    return 0;
}   