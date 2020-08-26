#include<iostream>
using namespace std;

int main(){
    int a,abc=0,count=0;
    int b[3];
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b[0]>>b[1]>>b[2];
        count=0;
        for(int j = 0;j<3;j++){
            
            if(b[j]==1){
                count++;
            }   
        }
        if(count>1){
            abc++;
        }
    }

    cout<<abc<<endl;

    return 0;
}