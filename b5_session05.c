#include<stdio.h>
int main(){
	int age;
	float fare;
	const int nf = 20000;
	printf("nhap tuoi: ");
	scanf("%d",&age);
	if(age <= 0 || age >= 100 ){
		printf("Tuoi khong hop le");
	}else if(age < 6){
		fare = nf / 100 * 0 ;
		printf("So tien ve : %.0f VND",fare);
	}else if(age >= 6 && age <= 18){
		fare = nf / 2 ;
		printf("So tien ve : %.0f VND",fare);
	}else if(age >= 19 && age <= 60 ){
		fare = nf ;
		printf("So tien ve : %.0f VND",fare);
	}else{
		fare = nf / 100 * 70 ;
		printf("So tien ve : %.0f VND",fare);
	}
	return 0;
}
