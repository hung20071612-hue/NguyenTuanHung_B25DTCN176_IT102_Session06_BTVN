#include<stdio.h>
int main(){
	char ch, ch_1;
	printf("nhap 1 ky tu duy nhat: ");
	scanf("%c",&ch);
	if(ch >= 65 && ch <= 90){
		ch_1 = ch + 32 ;
		printf("chu thuong tuong ung: %c",ch_1);
	}else if(ch >= 97 && ch <= 122){
		ch_1 = ch - 32;
		printf("chu hoa tuong ung: %c",ch_1);
	}else{
		printf("khong phai chu cai");
	}
	return 0;
}
