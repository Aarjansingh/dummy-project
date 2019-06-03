
#include<stdio.h>
#include<conio.h>
void main()
{
    char p[1][4],q[1][4],o[1][4];
    int i;
    for(i=0;i<4;i++)
    {

        scanf ("%c",&p[1][i]);
    }
    for(i=0;i<4;i++)
    {

        scanf ("%c",&q[1][i]);
    }
    for(i=0;i<4;i++)
    {
        if(p[1][4]==q[1][i])
        {
            o[1][i]='T';
            printf("%c\t%c\t%c\t\n",p[1][i],q[1][i],o[1][i]);
        }
        else
        {o[1][i]='F';
        printf("%c\t%c\t%c\t\n",p[1][i],q[1][i],o[1][i]);}
    }
