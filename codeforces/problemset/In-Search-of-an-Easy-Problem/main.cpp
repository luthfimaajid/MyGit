#include<iostream>
using namespace std;

int main(){
    int a;
    int count = 0;

    cin>>a;
    const int max = a;
    int b[max];

    for (int i = 0;i<a;i++){
        cin>>b[i];
        for (int i = 0;i<a;i++){
            if(b[i]==1){
            count++;
        }
    }
    }



    if (count != 0){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }

    return 0;
}