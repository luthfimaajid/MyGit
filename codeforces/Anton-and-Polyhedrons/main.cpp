#include<iostream>
using namespace std;

int main(){
    int a;
    string p;
    int count=0;

    cin>>a;
    for (int i = 0;i<a;i++){
        cin>>p;
        if (p=="Tetrahedron"){
            count+=4;
        }else if (p=="Cube"){
            count+=6;
        }else if (p=="Octahedron"){
            count+=8;
        }else if (p=="Dodecahedron"){
            count+=12;
        }else if (p=="Icosahedron"){
            count+=20;
        }


    }

    cout<<count;

    return 0;
}