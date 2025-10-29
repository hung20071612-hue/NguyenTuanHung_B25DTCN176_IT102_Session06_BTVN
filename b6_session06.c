#include<stdio.h>

int main(){
	int u;
	float i,n;
	printf("moi ban nhap hai so a, b: ");
	scanf("%f, %f",&i,&n);
	do{
		printf("1, tong 2 so\n2, hieu 2 so\n3, tich 2 so\n4, thuong 2 so\n5, thoat\nluu chon cua ban: ");
		scanf("%d",&u);
		switch (u){
			case 1:
				printf("ket qua la: %.2f\n",i + n);
				break;
			case 2:
				printf("ket qua la: %.2f\n",i - n);
				break;	
			case 3:
				printf("ket qua la: %.2f\n",i * n);
				break;
			case 4:
				if(n == 0){
					printf("Khong the chia cho 0\n");
					return 0;
				}else{
					printf("ket qua la: %.2f\n",i / n);
				}
				break;
		    case 5:
		    	printf("thoat truong trinh\n");
		    	break;
		    default:
		    	printf("khong hop le moi ban nhap lai\n");
		    }
		}while(u != 5);
	return 0;
}

