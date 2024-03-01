#include <stdio.h>
#include <math.h>
void nhap(int a, int b, int c){
	printf("Moi ban nhap 3 canh cua tam giac\n");
	scanf("%d%d%d", &a, &b, &c);
}
int kiemtra(int a, int b, int c){
	if(a+b > c && a+c > b && b+c > a)
	return 1;
}

void kiemtratamgiac(int a, int b, int c){
	if(kiemtra(a,b,c)==1 && a==b==c)
	printf("Day la tam giac deu\n");
	else if(kiemtra(a,b,c)== 1 && (a == b != c|| a == c !=b|| b==c!=a))
	printf("Day la tam giac deu\n ");
	else if(kiemtra(a,b,c)==1 && (pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(c,2)+pow(a,2)||pow(c,2)==pow(a,2)+pow(b,2)))
	printf("Day la tam giac vuong!\n");
	
}



int main(){
	int a, b,c;
	nhap(a,b,c);
	if(kiemtra(a,b,c)==1)
	printf("Day la tam giac!\n");
	else 
	printf("Day khong phai la tam giac!");
	
	return 0;
}

