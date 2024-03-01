#include<stdio.h>
#include<string.h>
 struct sinhvien{
 	char stt[50];
 	int ma;
 	char ten[50];
 	int diem;
 	
 };
 typedef struct sinhvien SV;
 	void nhap( SV a[],int n){
 		for(int i=0;i<n;i++){
 			printf("Nhap stt %d",i+1); fflush(stdin); gets(a[i].stt);
 			printf("Nhap ma Nv");scanf("%d",&a[i].ma);
 			printf("Nhap ten"); fflush(stdin); gets(a[i].ten);
 			printf("Nhap diem"); scanf("%d",&a[i].diem);
		 }
	}
	void xuat( SV a[], int n){
	printf("danh sach sinh vien\n");
	printf("%-10s %-20s %10s %20s \n","STT", "MA", "TEN","DIEM");
	for(int i=0;i<n;i++){
		printf("%-10s %-20d %10s %20d \n",a[i].stt,a[i].ma,a[i].ten,a[i].diem);
	}
}
int main(){
	int n;
	printf("Nhap so sinh vien");
	scanf("%d",&n);
	struct sinhvien SV[50];
	nhap(SV,n);
	xuat(SV,n);
}

