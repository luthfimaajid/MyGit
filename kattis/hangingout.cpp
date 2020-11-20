#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int n, x, y=0,out=0, z;
    char str[10];



    cin>>z>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        scanf("%s %d", &str, &x);
        if(str[0]=='l'){
           y-=x; 
        }else{
            y+=x;
        }
        
        if(y>z){
            y-=x;
            out++;
        }
        

    }

    cout<<out<<endl;


    return 0;
}   