#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    int z=0,e=0,r=0,o=0,n=0;
    int countz=0,counto=0;
    cin>>a;
    string b;
    cin>>b;

    int max=a;
    string c[max];

    for (int i = 0;i<max;i++){
        c[i]=b.substr(i,1);
       
        
        /* 
        if (c[i]=="z"){
            if (c[i+1]=="e"){
                if (c[i+2]=="r"){
                    if (c[i+2]=="o"){
                        countz++;
                    }
                }
            }
        } 
        */
       
           
           
           /* zero.substr(i,1) = c[i]; 
        } else if (c[i]=="e"){
            zero.substr(i,1) = c[i]; 
        } else if (c[i]=="r"){
            zero.substr(i,1) = c[i]; 
        } else if (c[i]=="o"){
            zero.substr(i,1) = c[i]; 
        } 

        if (zero == "zero"){
            cout<<zero;
        }*/
       
    }

    for (int i = 0;i<max;i++){
         if(c[i]=="z"){
                for (int j = 0;j<max;j++){
                    if(c[j]=="e"){
                        for (int k = 0;k<max;k++){
                            if(c[k]=="r"){
                                for (int l = 0;l<max;l++){
                                    if(c[l]=="o"){
                                        countz++;break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
    }

     cout<<endl<<countz<<endl;

    //test    
    for (int i = 0;i<max;i++){
        cout<<c[i];
       
    }

    cout<<endl;

    //zero
    for(int i=0;i<max;i++){
      
    }

    //one



/*


    cout<<z<<endl;
       cout<<e<<endl;
          cout<<r<<endl;
             cout<<o<<endl;
                cout<<n<<endl;

*/



/*

    if ((z==r) {
        countz=z;
    }else if ((o == n)&& (n == e)){
        counto=n;
    }

    cout<<countz<<endl;
    cout<<counto<<endl;

   */
    return 0;
}