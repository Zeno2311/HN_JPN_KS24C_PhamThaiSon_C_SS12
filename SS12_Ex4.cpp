#include <stdio.h>

int main(){
	int Maxarr();

	printf("Gia tri lon nhat trong mang la %d",Maxarr());
	
return 0;	
}

int Maxarr(){
	int max;
	int arr[]={2,6,4,45,8,11};
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
