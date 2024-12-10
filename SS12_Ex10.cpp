#include <stdio.h>

int choice,size;
int arr[100];

int main(){
	do{
		int displayMenu();
		displayMenu();
		printf("Lua chon cua ban : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: //Gioi han mang va gia tri do nguoi dung nhap vao 
				void menu1();
				menu1();
				break;
			case 2: //In ra cac gia tri ma mang dang quan li
				void menu2();
				menu2();
				break;
			case 3: //Them phan tu vao vi tri ban muon 
				void menu3();
				menu3();
				break;
			case 4: //Sua phan tu o vi tri chi dinh 
				void menu4();
				menu4();
				break;
			case 5: //Xoa phan tu o vi tri chi dinh 
				void menu5();
				menu5();
				break;
			case 6: //Sap xep phan tu 
				void menu6();
				menu6();
				//a,Sap xep tang dan 
				//b,Sap xep giam dan
				break;
			case 7: // Tim kiem phan tu 
				void menu7();
				menu7();
				break;
			case 8: // Thoat chuong trinh
				printf("Thoat.\n");
				printf("Hen gap lai ban !!!");
				break;							
		}
	}while(choice!=8);
	return 0;
}

void displayMenu(){
	int choice;
	printf("\n\t\t---MENU---\n");
	printf("1.Nhap so phan tu can nhap va gia tri ca phan tu.\n");
	printf("2.In ra gia tri cac phan tu dang quan ly.\n");
	printf("3.Them mot phan tu vao vi tri chi dinh.\n");
	printf("4.Sua mot phan tu o vi tri chi dinh.\n");
	printf("5.Xoa phan tu o vi tri chi dinh.\n");
	printf("6.Sap xep cac phan tu.\n");
	printf("7.Tim kiem phan tu nhap vao.\n");
	printf("8.Thoat.\n");	
}
void menu1(){
	printf("Moi ban nhap gioi han cua mang : ");
			scanf("%d",&size);
			for(int i=0;i<size;i++){
				printf("arr[%d] = ",i);
				scanf("%d",&arr[i]);
			}
}
void menu2(){
	printf("Cac gia tri ma ban dang quan li : ");
	for(int i=0;i<size;i++){
		printf("\tarr[%d] = %d",i,arr[i]);
	}
}
void menu3(){
	int numbernew;
	int inSize;
	printf("Ban muon them gia tri nao : ");
	scanf("%d",&numbernew);
	printf("Ban muon them gia tri do vao vi tri nao : ");
	scanf("%d",&inSize);
	for(int i=size;i>inSize;i--){
		arr[i]=arr[i-1];
	}
	arr[inSize]=numbernew;
	printf("Mang sau khi duoc them gia tri : ");
	for(int i=0;i<size+1;i++){
		printf("\t%d",arr[i]);
	}
}
void menu4(){
	int fixnumber;
	int inSize;
	printf("Ban muon sua phan tu o vi tri nao (0 -> %d) : ",size);
	scanf("%d",&inSize);
	while(inSize<0 || inSize>size){
		printf("Vi tri khong hop le vui long nhap lai : ");
		scanf("%d",&inSize);
	}
	printf("Ban muon sua phan tu do thanh gia tri nao : ");
	scanf("%d",&fixnumber);
	
	arr[inSize]=fixnumber;
	
	printf("Mang sau khi duoc sua : ");
	for(int i=0;i<size;i++){
		printf("\t%d",arr[i]);
	}
}
void menu5(){
	int inSize;
	printf("Ban muon xoa phan tu o vi tri nao : ");
	scanf("%d",&inSize);
	while(inSize<0 || inSize>size){
		printf("Vi tri khong hop le vui long nhap lai : ");
		scanf("%d",&inSize);
	}
	for(int i=inSize;i<size;i++){
		arr[i] = arr[i+1];
	}
	for(int i=0; i<size-1; i++){
		printf("%3d",arr[i]);
	}
}
void menu6(){
	char choicemin;
	printf("a, Sap xep tang dan.\n");
	printf("b, Sap xep giam dan.\n");
	printf("Ban muon sap xep theo kieu nao : ");
	scanf("%s",&choicemin);
	if(choicemin == 'a'){
		for(int i=0;i<size-1;i++){
			for(int j=0;j<size-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		for(int i=0; i<size; i++){
			printf("%3d",arr[i]);
		}
	}else if(choicemin == 'b'){
			for(int i=0; i<size-1 ; i++ ){
				for(int j=0; j<size-i-1 ; j++){
					if(arr[j]<arr[j+1]){
						int temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
					}
				}
			}
		for(int i=0; i<size; i++){
			printf("%3d",arr[i]);
		}
	}
}
void menu7(){
	int checknumber,inSize=-1;
	printf("Ban muon tim kiem phan tu nao : ");
	scanf("%d",&checknumber);
	for(int i=0; i<size; i++){
		if(arr[i]==checknumber){
			inSize = i;
		}
	}
	if(inSize >= 0){
		printf("\nPhan tu ban dang tim o vi tri : %d",inSize);
	}else if(inSize == -1){
		printf("\nKhong ton tai phan tu do trong mang");
	}
}



