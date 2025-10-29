#include <stdio.h>
int main() {
    int x, y;
    printf("Nhap so nguyen duong thu 1, thu 2: ");
    scanf("%d %d", &x,&y);
    if (x <= 0 || y <= 0) {
        printf("Vui long nhap hai so nguyen duong");
        return 0;
    }
    int a = x, b = y;
    while (a != b) {
        if (a > b){
        	a = a - b;
		}else{
			b = b - a;			
		}
    }
    int ucln = a; 
    int bcnn = (x * y) / ucln; 
    printf("Boi chung nho nhat cua %d va %d la: %d", x, y, bcnn);
    return 0;
}

