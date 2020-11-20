#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n, x;
    cin>>n;
    long long int max=0;
  

    for(int i =0; i<n;i++){
        cin>>x;
        if(x<100){

            max+=pow(x/10, (x%10));

        }else if(x<1000){
            max+=pow(x/10, (x%10));
            
        }else{
            max+=pow(x/10,(x%10));
            
        }

    }

    cout<<max;
 

    return 0;
}