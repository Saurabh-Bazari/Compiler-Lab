

//checks array, for loop function call 
#include <stdio.h> 

int foo(int a,int b){
    int c=a*b;
    return c;
}
int function_call(){
    printf("short circuit failed");
    return 0;
}
int f1(){
    return 0;
}
void short_circuit(){
    int a=2;
    int b=3;
    if(a==b || function_call()){
        printf("short circuit passed");    
    }
}

int main() 
{
	short_circuit();
    int k=5;
    k=foo(k,f1());
    printf(k);
} 
