#include<stdio.h>
int main(){
	float electric, money ;
	int home_use ;
	printf("so dien tieu dung trong mot thang: ");
	scanf("%f",&electric);
	printf("loai ho tieu dung: ");
	scanf("%d",&home_use);
	switch (home_use) {
		case 1:
		if (electric <= 0){
			printf("so dien khong xac dinh");
			return 0;
		}else if(electric <= 50){
			money = electric * 1500 + (electric * 1500) * 5/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else if(electric <= 100){
			money = 50 * 1500 + (electric - 50) * 2000 + 
			(50 * 1500 + (electric - 50) * 2000) * 5/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else if(electric <= 200){
			money = 50 * (1500 + 2000) + (electric - 100) * 2500 + 
			(50 * (1500 + 2000) + (electric - 100) * 2500) * 5/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else{
			money = 50 * (1500 + 2000) + 100 * 2500 + (electric - 200) * 3000 +
			(50 * (1500 + 2000) + 100 * 2500 + (electric - 200) * 3000) * 5/100;
			printf("tien dien thang nay la: %.2f VND",money);
		}
		break;
	    case 2:
        if (electric <= 0){
			printf("so dien khong xac dinh");
			return 0;
		}else if(electric <= 50){
			money = electric * 1500 + (electric * 1500) * 10/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else if(electric <= 100){
			money = 50 * 1500 + (electric - 50) * 2000 + 
			(50 * 1500 + (electric - 50) * 2000) * 10/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else if(electric <= 200){
			money = 50 * (1500 + 2000) + (electric - 100) * 2500 + 
			(50 * (1500 + 2000) + (electric - 100) * 2500) * 10/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else{
			money = 50 * (1500 + 2000) + 100 * 2500 + (electric - 200) * 3000 + 
			(50 * (1500 + 2000) + 100 * 2500 + (electric - 200) * 3000) * 10/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}
		break;
		case 3:
			if (electric <= 0){
			printf("so dien khong xac dinh");
			return 0;
		}else if(electric <= 50){
			money = electric * 1500 + (electric * 1500) * 8/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else if(electric <= 100){
			money = 50 * 1500 + (electric - 50) * 2000 + 
			(50 * 1500 + (electric - 50) * 2000) * 8/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else if(electric <= 200){
			money = 50 * (1500 + 2000) + (electric - 100) * 2500 + 
			(50 * (1500 + 2000) + (electric - 100) * 2500) * 8/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}else{
			money = 50 * (1500 + 2000) + 100 * 2500 + (electric - 200) * 3000 +
			(50 * (1500 + 2000) + 100 * 2500 + (electric - 200) * 3000) * 8/100 ;
			printf("tien dien thang nay la: %.2f VND",money);
		}
		break;
	}
	return 0;
}
