#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x,y,z;
    
    cin>>n;

    for (int i =0; i<n;i++){
        cin>>x;
        y=0;
        z=0;
        string city[x];     
        for(int j=0;j<x;j++){
            cin>>city[j];

            for(int k = j; k>0;k--){
                if(city[j]==city[k-1]){
                    city[j]="null";
                    
                }
            }
            
        }
        for(int j=0; j < x; j++){
            if(city[j]!="null"){
                y++;
            }
        }

        cout<<y<<endl;    


    }


 

    return 0;
}