#include <bits/stdc++.h>


#define PI 3.14159
#define ull unsigned long long

int main(){
    using namespace std;

    float tmp=0, tmp2=0;

    double  x,y;
    do{
        cin>>x>>y;
        tmp=PI*(pow(0.5*x,2)*x);
        tmp2=tmp-y;
        printf("%0.10f\n", sqrt(tmp2/PI));
    }while((x!=0) && (y!=0));


    

    return 0;
}   