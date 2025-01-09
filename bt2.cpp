#include <stdio.h>
#include <string.h>

struct sinhVien{
	char name[100];
	int age;
	char phoneNumber[100];
};

typedef struct sinhVien sinhVien;

int main(){
	sinhVien x;
	printf("Nhap vao ten: ");
	fgets(x.name,100,stdin);
	x.name[strcspn(x.name,"\n")] = '\0';
	
	printf("Nhap tuoi: ");
	scanf("%d",&x.age);
	
	getchar();
	printf("Nhap sdt: ");
	fgets(x.phoneNumber,100,stdin);
	x.name[strcspn(x.name,"\n")] = '\0';
	
	printf("Ten: %s\n",x.name);
	printf("Tuoi: %d\n",x.age);
	printf("Sdt: %s",x.phoneNumber);
}
