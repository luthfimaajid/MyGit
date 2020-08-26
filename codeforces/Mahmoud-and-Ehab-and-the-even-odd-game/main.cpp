#include <iostream>
using namespace std;

int main(){
    int a,m=0,e=0;
    cin>>a;

   while(a>0){
        if(a%2==0){
            a-=a;
            m++;

        }else if(a%2!=0){
            a-=a;
            e++;
        }
   }
    
    if(m>e){
        cout<<"Mahmoud"<<endl;
    }else {
        cout<<"Ehab"<<endl;
    }

    return 0;
}
