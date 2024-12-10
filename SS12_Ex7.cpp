#include <stdio.h>

int arr[50][50];
int all;
int main(){
	void inArr();
	inArr();
	return 0;
}

void inArr(){
	printf("Ban muon nhap ma tran voi gia tri : ");
	scanf("%d", &all);
	
	for(int i=0; i<all; i++){
		for(int j=0; j<all; j++){
			arr[i][j] = all;
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
}
