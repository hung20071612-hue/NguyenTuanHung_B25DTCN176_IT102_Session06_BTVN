#include<stdio.h>
int main(){
	float salary_number, salary;
	int work_day ;
	int position ;
	printf("he so luong: ");
	scanf("%f",&salary_number);
	printf("so ngay cong: ");
	scanf("%d",&work_day);
	printf("phu cap theo chuc vu: ");
	scanf("%d",&position);
	switch (position){
	case 1:
		if(work_day > 26){
		salary = (work_day * 160000 * salary_number) + 500000 + ((work_day - 26) * 200000);
		printf("tien luong la: %.2f VND",salary);
		return 0;
	    }else{
	    	salary = (work_day * 160000 * salary_number) + 500000 ;
		}printf("tien luong la: %.2f VND",salary);
		break;
	case 2:
		if(work_day > 26){
		salary = (work_day * 160000 * salary_number) + 1000000 + ((work_day - 26) * 200000);
		printf("tien luong la: %.2f VND",salary);
		return 0;
	    }else{
	    	salary = (work_day * 160000 * salary_number) + 1000000 ;
		}printf("tien luong la: %.2f VND",salary);
		break;
	case 3:
		if(work_day > 26){
		salary = (work_day * 160000 * salary_number) + 2000000 + ((work_day - 26) * 200000) ;
		printf("tien luong la: %.2f VND",salary);
		return 0;
	    }else{
	    	salary = (work_day * 160000 * salary_number) + 2000000 ;
		}printf("tien luong la: %.2f VND",salary);
		break;
	}
	return 0;
}
