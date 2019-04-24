#include<stdio.h>
int k = 25;
int l = 10;
int sahib(){
	int arr[2][2][2];
	int b[3][3];
	b[1][1] = 2;
	arr[1][1][1] =3;
	arr[0][0][0] = b[1][1];

	return arr[0][0][0];
} 
void void_func(){
	while(1){
		--k;
		if(k==10){
			break;
		}
	}
}
int func1(int a,int b){
	++b;
}
int func2(int c){
	int s;
	s=c;
	switch (c)
	{
		case (0):
			{
				void_func();
				return c;
				break;
				
			}
		case (1):{
			return c+1;
			break;
		}
		default:{
			break;
			}
	}
}


main()
{
	
	int a,b,c,d;
	int arr[2][2][2];

	a = 3;
	b = 5;
	c = a*b;
	
    d=0;
	if( a == 3 && b == 5){
		int i ;
		for(i=0;i<c;++i){
			++d;
		}
	}
	

	while( c == d){
		if(a>b){
			--a;
		}
		else{
			--b;
		}

		if(a==b){
			break;
		}
	}

	
	int r=func1(a,b);
	arr[1][1][1] = func2(r);
	int p;
	p = sahib();
	if(r==0||p==0){
		int q;
		
		q=3;
		q = q+p;
	}
    a=a+12;
    b=b+12;
    r=r+12;
    p=p+13;
    arr[1][1][1] = arr[1][1][1] + 12;
    k= k -10;
    l=l+5;

    // printf("a %d b %d c %d d %d r %d p %d arr %d k %d l %d ",a,b,c,d,r,p,arr[1][1][1],k,l);

}