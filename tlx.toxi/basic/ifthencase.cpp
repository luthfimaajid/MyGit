#include <iostream>

int main(){
    using namespace std;

    string abc;
    cin>>abc;

    int x = abc.length();

    switch (x){
    case 1:
        cout<<"satuan"<<endl;
        break;
    case 2:
        cout<<"puluhan"<<endl;
        break;
    case 3:
        cout<<"ratusan"<<endl;
        break;
    case 4:
        cout<<"ribuan"<<endl;
        break;
    case 5:
        cout<<"puluhribuan"<<endl;
        break;
    default:
        break;
    }

    

    return 0;
}