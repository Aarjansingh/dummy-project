#include<stdio.h>
#include<conio.h>
int main()
{
char C1,C2;
printf("Enter T for true condition and F for false condition\n");
scanf("%c %c",&C1,&C2 );
if(C1=='T' && C2=='F')
printf("F");
else
    printf("T");
    return 0;
}
