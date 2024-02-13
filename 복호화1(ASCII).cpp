#include <stdio.h>
#include <iostream>
int main()
{
	char a[40];
	int i;
	printf("암호화된 문자를 입력하세요:");
	scanf("%s",a);
	printf("결과1: ") ;	
	for(i=0;a[i] != NULL;i++)
		printf("%c",a[i]-2);
	printf("결과2:");
	for(i=0;a[i] != NULL;i++){
    int x = 0;
    while (true) {
        if ((x * 7) % 80 + (x * 7) / 80 == 61) {
            std::cout << x << std::endl;
            break;
        }
        x++;
    }
    printf("%c",65);
	}
		
}
