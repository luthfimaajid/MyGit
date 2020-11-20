#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int x,y,z,bp=0;
    cin>>x>>y>>z;
    bp=x*3+y*2+z;

    
    if(bp>=8){
        cout<<"Province";
        
    }else if(bp>=5){
        cout<<"Duchy";
       
    }else if(bp>=2){
        cout<<"Estate";
        
    }else{
        cout<<"Copper"<<endl;
        return 0;
    }
    

    if(bp>=6){
        cout<<" or Gold"<<endl;
    }else if(bp>=3){
        cout<<" or Silver"<<endl;
    }else{
        cout<<" or Copper"<<endl;
    }

    



    return 0;
}