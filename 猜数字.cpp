#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int b=0,c=0;
	srand(time(0)); 
	int a=rand()%100+6;
	printf("������µ�����");
	printf("%d",a);

	do{	
	scanf("%d",&b);
	c++;
	if(b<a)
	printf("��С��");
	else if(b>a){
	printf("��С��");	
	}

}
	while(b!=a);
	
	printf("����%d�ξͲ¶���",c); 
	

	return 0;
}
