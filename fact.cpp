/*#include<stdio.h>
int main(){
	int n,temp=1;
	printf("Enter a Number\n");
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		temp = temp*i;
	}
	printf("Factorial of %d is %d\n",n,temp);
}


#include<stdio.h>
void fact(int);
int main(){
	int n;
	printf("Enter a Number\n");
	scanf("%d",&n);
	fact(n);
	return 0;
}

void fact(int n){
	int i,temp =1;
	for(int i=2;i<=n;i++){
		temp = temp*i;
	}
	printf("Factorial of %d is %d\n",n,temp);
}*/


#include<stdio.h>
int main(){
	int a=8, b=5;
	printf("%d\n",a&b);
	printf("%d\n",a|b);
	printf("%d\n",a^b);
	printf("%d\n",8<<2);
	printf("%d\n",16>>3);
	return 0;
}
