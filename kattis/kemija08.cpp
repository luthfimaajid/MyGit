#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    string x, y="";

    getline(cin, x);
    for(int i=0; i<x.size(); i++){
        if((x[i]=='a')||(x[i]=='i')||(x[i]=='u')||(x[i]=='e')||(x[i]=='o')){
            y+=x[i];
            i+=2;
        }else{
            y+=x[i];
        }
    }

    cout<<y<<endl;
    

    

    


    return 0;
}   