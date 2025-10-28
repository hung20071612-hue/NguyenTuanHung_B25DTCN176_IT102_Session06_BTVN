#include<stdio.h>
int main(){
	float a, b, plus, minus, multiply, divine;
	char ch;
	printf("nhap 2 so thuc a, b: ");
	scanf("%f, %f", &a, &b);
	getchar();
	printf("nhap toan tu: ");
	scanf("%c",&ch);
	switch (ch) {
		case '+':
			plus = a + b ;
		    printf("ket qua la: %.2f",plus);
		    break;
		case '-':
			minus = a - b ;
			printf("ket qua la: %.2f",minus);
			break;
		case '*':
			multiply = a * b ;
			printf("ket qua la: %.2f",multiply);
			break;
		case '/':
			divine = a / b ;
			if(b == 0){
				printf("khong the chia cho 0");
				return 0;
			}
			printf("ket qua la: %.2f",divine);
			break;    
		default:
			printf("Toan tu khong hop le");
			break;
	}
	return 0;
}
