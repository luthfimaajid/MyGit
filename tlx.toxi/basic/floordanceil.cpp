#include <iostream> 
#include <math.h>

int main(){
    using namespace std;

    float x;
    cin>>x;

    

    if(trunc(x)==x){
        cout<<x<<" "<<x<<endl;
    }else if(x>0){
        int y = trunc(x);
        cout<<y<<" "<<++y<<endl;
    }else{
        int y = trunc(x);
        cout<<--y<<" "<<++y<<endl;
    }
    


    return 0;
}