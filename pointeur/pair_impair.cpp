#include<stdio.h>
int main(){
	
	int n ;
	int *p=&n;
	
	printf("entrer un nombre"); scanf("%d",p);
	if (n%2==0){
		printf("%d est pair", *p);
	}
	else  printf("%d est impair", *p);
	
}
