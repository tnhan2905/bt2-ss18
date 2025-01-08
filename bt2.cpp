#include <stdio.h>

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a=1,b=2;
	printf("Truoc khi dao X = %d , Y = %d\n\n",a,b);
	swap(&a,&b);
	printf("Sau khi dao X = %d , Y = %d",a,b);
}
