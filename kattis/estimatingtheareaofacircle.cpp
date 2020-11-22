#include <bits/stdc++.h>


#define PI 3.14159
#define ull unsigned long long

int main(){
    using namespace std;

    float x,y,z;

    while(1){
        cin>>x>>y>>z;
        if((x==0)&&(y==0)&&(z==0)){
            break;
        }
        printf("%.9f %.9f\n", PI*x*x, z/y*pow(x*2,2));
    }

    


    

    return 0;
}   