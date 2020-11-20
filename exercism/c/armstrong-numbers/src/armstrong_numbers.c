#include "armstrong_numbers.h"
#include <math.h>



bool is_armstrong_number(int candidate){
    int digits[10], i = 0, sums = 0, x = candidate;

    //separating the digits
    while(x/10!=0){             
        digits[i] = x%10;
        x /= 10;
        i++;
    }
    digits[i]=x%10;

    //calculating the digits
    for(int j = 0; j <= i; j++){
        sums += pow(digits[j], i+1);
    }

    return (sums==candidate); 

}