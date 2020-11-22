#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159



int main(){
    using namespace std;

    unsigned int n, x;
    string str;

    cin>>n>>x;
    cin>>str;
    for(int i=0; i<n; i++){
        if(x==0){ 
            if(str[i]!='x') x+=1;
        }
        else if(str[i]=='x') x-=1;
        else x+=1;
    }

    cout<<x<<endl;
    

    


    return 0;
}   