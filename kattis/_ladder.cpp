#include <bits/stdc++.h>
#include <stdio.h>

#define PI 3.14159

int main(){
    using namespace std;
    int n,x;
    cin>>n>>x;
    cout<<ceil((n*sin(90*PI/180))/sin(x*PI/180))<<endl;
    

    return 0;
}   