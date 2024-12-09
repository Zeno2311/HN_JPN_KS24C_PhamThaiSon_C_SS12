#include <stdio.h> 

int main(){
	long long  giaithua(int number);
	int number; 
	printf("Moi ban nhap vao mot so nguyen duong : ");
	scanf("%d",&number);
	
	if(number<0) {
		printf("Giai thua khong xac dinh cho so am \n"); 
	}else{
		printf("Giai thua cua %d là %lld",number,giaithua(number));
	} 
return 0;	
} 

long long giaithua(int number){

	if(number == 0){
		return 1;
	}else{
		return number*giaithua(number-1);
	}
}
