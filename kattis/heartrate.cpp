#include <bits/stdc++.h>
#include <stdio.h>

int main(){
    using namespace std;
    int n,x;
    float y, t, bpm,abpm;

    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>x>>y;
        bpm=((60*x)/y);
        abpm=60/y;
        printf("%.4f %.4f %.4f\n", bpm-abpm, bpm, bpm+abpm);
    }
 

    return 0;
}