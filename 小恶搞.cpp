#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h> 
int main()
{
	char arr1[]="–°À’ «≈£»À";
	char arr2[]="##########";
	int left=0; 	printf("%s",arr2);
	while(left<10)
	{
		arr2[left]=arr1[left];
		printf("%s",arr2);
		Sleep(1000);
		system("cls");
		left++;
	}
	
	
	
	return 0; 
}
