#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int b=0,c=0;
	srand(time(0)); 
	int a=rand()%100+6;
	printf("输入你猜的数字");
	printf("%d",a);

	do{	
	scanf("%d",&b);
	c++;
	if(b<a)
	printf("猜小了");
	else if(b>a){
	printf("猜小大");	
	}

}
	while(b!=a);
	
	printf("用了%d次就猜对了",c); 
	

	return 0;
}
