//checks array, for loop function call 
#include <stdio.h> 

// float arr[100];

// // A function to implement bubble sort 
// void bubbleSort(int n) 
// { 
//     int i,j; 
//     for (i = 0; i < n-1; ++i)	 
//     {
//         // Last i elements are already in place 
//         for (j = 0; j < n-i-1; ++j) {
//             if (arr[j] > arr[j+1]) {
//                 float k;
//                 k=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=k;
                
//                 }
//         }
//     }
// }


// /* Function to print an array */
// void printArray(int size) 
// { 
// 	int i; 
// 	for (i=0; i < size; ++i) {
//         printf(arr[i]); 
//     }
	
// } 

// Driver program to test above functions 
int n = 5;
int d = 6;
int main() 
{ 
    int arr[3][3];
    int brr[3][3];
    int crr[3][3];
    int i,j;
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            scanf(arr[i][j]);
            brr[i][j] = arr[i][j];
            crr[i][j] = arr[i][j] + brr[i][j];
            printf(crr[i][j]);
        }
    }
	return 0; 
} 
