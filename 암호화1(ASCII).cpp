#include <stdio.h>
main()
{
	char pw[100];
	int i;
	printf("암호를 입력하세요 : ");
	scanf("%s",pw);
	printf("결과1:");
	for(i=0;pw[i] != NULL;i++)
		printf("%c",pw[i]+2);
	printf("\n결과2:");
	for(i=0;pw[i] != NULL;i++)
		printf("%c",(pw[i]*7)%80 + (pw[i]*7)/80 + 48);
	

} 
