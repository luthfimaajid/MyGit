#include <bits/stdc++.h>

int main(){
    using namespace std;

    float n,m,a,b;

    cin>>n>>m>>a>>b;

    if(((n*m)/(a*b))>floor((n*m)/(a*b))){
        cout<<floor((n*m)/(a*b))-1<<endl;
    }else{
        printf("%0.f\n", ((n*m)/(a*b)) );
    }
    

    return 0;
}