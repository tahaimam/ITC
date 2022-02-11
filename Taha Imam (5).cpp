#include <stdio.h>
int main(){
	char n;
	int q,cost=0,i;
	
	printf("1. Sausage Rs.220 \n");
	printf("2. cheese and mushroom omelet Rs.50 \n");
	printf("3. paratha Rs.25 \n");
	printf("4. French Toast Rs.45 \n");
	printf("5. coffee Rs.120 \n");
	printf("6. Tea Rs.40 \n");
	printf("7. Pan cake with Nutella serving Rs.395 \n");
	
	
	printf("Input Name:"); 
	scanf("%c",&n);
	printf("Input Item:"); 
	scanf("%d",&i);
	printf("Input Quantity:"); 
	scanf("%d",&q);
	
	switch(i){
		case 1:
			cost=220*q;
			break;
		case 2:
			cost=50*q;
			break;
		case 3:
			cost=25*q;
			break;
		case 4:
			cost=45*q;
			break;
		case 5:
			cost=120*q;
			break;
		case 6:
			cost=40*q;
			break;
		case 7:
			cost=395*q;
			break;
		default:
			printf("Incorrect Option");
	}
	
	
	printf("\n Hi %c \n", n);
	printf("Your total bill is: %d",cost);
}
