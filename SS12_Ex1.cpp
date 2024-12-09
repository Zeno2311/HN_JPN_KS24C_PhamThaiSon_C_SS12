#include <stdio.h>
#include <math.h>

int main(){
    
    int number1, number2;
    int choice;
    int sum;
    int squareResult;
    double sqrtResult;
    void displayMenu();
    int absSum();
    

	do {
	    displayMenu();
	    printf("Moi ban nhap vao lua chon cua ban: ");
	    scanf("%d", &choice);

	    switch(choice){
	    	case 1:
	    	
	    		sum = absSum();
	    		
	    		printf("Tong 2 so = %d\n", sum);
	    		break;
	    	case 2:
	    	
	    		sum = absSum();
			
				squareResult = sum*sum;
				
				printf("Binh phuong tong 2 so = %d\n", squareResult);
	    		break;
	    	case 3:
	    	
	    		sum = absSum();
	    	
	    		sqrtResult = sqrt((double)sum);
	    	
	    		printf("Can bac 2 tong 2 so = %.2f\n", sqrtResult);
	    		break;
	    	case 4:
	    		
	    		printf("Hen gap lai !!!\n");
	    		break;
	    	default:
	    	
	    		printf("Lua chon khong hop le. vui long chon lai !!!");
	    		break;
		}


	} while(choice != 4);
   

    return 0;
}
void displayMenu(){
    printf("\n----------- MENU -----------\n");
    printf("1. Tinh tong 2 so\n");
    printf("2. Tinh binh phuong tong 2 so\n");
    printf("3. Tinh can bac 2 tong 2 so\n");
    printf("4. Thoat (Exit)\n");
}
int absSum(){
	int number1,number2,sum;
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &number1);
	
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &number2);

	sum = number1 + number2;
	
	return sum;
}
