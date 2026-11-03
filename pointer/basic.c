#include <stdio.h>

void factorial(int);

void main(){
    factorial(10);
}

void factorial(int n){
    int s_um = 1;
    for(int j = 0; j < n; j++){
        s_um *= (j + 1);
    }
    printf("%d", s_um);
}