#include <stdio.h>

int main(){
	void arrF();
	arrF();
return 0;
}

void arrF(){
	printf("Mang cua ban la : ");
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<size;i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
}
