#include<iostream>
#include<string>

using namespace std;
int main(){
    //substr();
    int count=0;
    string h[5]; 
    string a;
    cin>>a;
    for(int i = 0;i<5;i++){
        cin>>h[i];
    }

    for(int i = 0;i<5;i++){
        if(h[i].substr(0,1)==a.substr(0,1)){
            count++;
            break;
        }else if(h[i].substr(1,1)==a.substr(1,1)){
            count++;
            break;
        }else{
            
        }

    }

    if(count>0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}