#include <stdio.h>
#include <stdlib.h>


int a;
int b;

int array_check(){
    int arr[2][2];
    int i,j;
    int k=0;
    for(i=0;i<2;++i){
        for(j=0;j<2;++j){
            arr[i][j]=i+j;
            k=k+arr[i][j];
        }
    }
    return k;
}
void while_loop(){
    while(a!=0){
        while(b!=0){
            --b;
        }
        --a;
    }
    
}

// recursion
int precedence(){
    int a,c,b;
    printf("enter a,b,c  to perform a+c*b:");
    scanf(a,b,c);
    int k=a+c*b;
    return k;
}

int main(){

    a=1;
    b=1;
    int s;
    s=precedence();
    printf(s);
    int k;
    k=array_check();
    printf(k);
    while_loop();
    printf(a);
    printf(b);
}