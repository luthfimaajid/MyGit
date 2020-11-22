#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int piece[6];

    for(int i=0; i<6; i++){
        cin>>piece[i];

    }
   
    printf("%d %d %d %d %d %d\n", 1-piece[0], 1-piece[1], 2-piece[2], 2-piece[3], 2-piece[4], 8-piece[5]);
    


    return 0;
}   