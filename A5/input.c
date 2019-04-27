#include<stdio.h>

int main()
{
	int arr[10];

	int i, j; 
	print("Enter : ");
	for (i = 0; i < 10; ++i){    
	   read(arr[i]);
	}
   	for (i = 0; i < 9; ++i){
       for (j = 0; j < 9-i; ++j)  {
           if (arr[j] > arr[j+1]) 
		   {
			   int t = arr[j];
			   arr[j] = arr[j+1];
			   arr[j+1] = t;
		   }
		}
	}
	print("Sorted Array : ");
	for (i = 0; i < 10; ++i){
	   print(arr[i]);
	}

}