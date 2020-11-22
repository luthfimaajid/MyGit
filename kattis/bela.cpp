#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int n, max=0;
    char z, x, y;
    char chr[3];

    cin>>n>>z;
    n*=4;
    for(int i=0; i<n; i++){
        scanf("%s", chr);
        //x=chr.substr(1,1);
        //y=chr.substr(2,1);
        switch(chr[0]){
            case('A'): max+=11; break;
            case('K'): max+=4; break;
            case('Q'): max+=3; break;
            case('J'): if(chr[1]==z) max+=20; else max+=2; break;
            case('T'): max+=10; break;
            case('9'): if(chr[1]==z) max+=14; break;
            case('8'): max+=0; break;
            case('7'): max+=0; break;
        }
    }
    cout<<max<<endl;


    return 0;
}   