#include<stdio.h>
int main(){
	float grade;
	printf("Nhap Diem : ");
	scanf("%f", &grade);
	if(grade >= 8){
		printf("Hoc luc gioi");
	}else if(grade >= 6.5){
		printf("Hoc luc kha");
	}else if(grade >= 5){
		printf("Hoc luc trung binh");
    }else{
    	printf("Hoc luc yeu");
	}
	return 0;
}
