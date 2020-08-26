#include<iostream>
#include<string>
using namespace std;

int main(){
    int x=0,y=0;
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    
    

    for (int i = 0;i<n;i++){
        
        if((a[i]=='F')&&(a[i+1]=='S')){
            y++;
        }else if((a[i]=='S')&&(a[i+1]=='F')){
            x++;
        }
    }   

 

    if(x>y){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}