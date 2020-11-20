#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int x,y,mnt=0;
    cin>>x>>y;

    if(x==0)x=24;
    mnt+=x*60+y;
    mnt-=45;


    cout<<mnt/60<<" "<<mnt%60<<endl;

    return 0;
}