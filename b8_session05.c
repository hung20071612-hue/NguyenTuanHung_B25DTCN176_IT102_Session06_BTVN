#include<stdio.h>
int main(){
	int block_water, money ;
	printf("khoi nuoc su dung trong thang: ");
	scanf("%d",&block_water);
	if(block_water <= 0){
		printf("so met khoi khong hop le");
	}else if(block_water > 0 && block_water <= 10){
		 money = block_water * 6000 ;
		 printf("tien nuoc la: %d VND", money);
	}else if(block_water >= 11 && block_water <= 20){
		money = 10 * 6000 + (block_water - 10) * 7000;
		printf("tien nuoc la: %d VND", money);
	}else if(block_water >= 21 && block_water <= 30){
		money = (10 * 6000) + (10 * 7000) + ((block_water - 20) * 8500);
		printf("tien nuoc la: %d VND", money);
	}else{
		money = (10 * 6000) + (10 * 7000) + (10 * 8500) + ((block_water - 30) * 10000 );
		printf("tien nuoc la: %d VND", money);
	}
	return 0;
}
