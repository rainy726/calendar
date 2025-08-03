#include <stdio.h>
int nissuu(int y, int m)
{
if(y%400==0 && m==2)
    return 29;
else if(y%100==0 && m==2)
    return 28;    
else if(y%4==0 && m==2)
    return 29;
else if(y%4!=0 && m==2)
    return 28;
else if(m==4 || m==6 || m==9 ||m==11)
    return 30;
else
    return 31;    
}

int main(void)
{
    int y, m, a, b, c, d, h, i, j, day1, day2;
    printf("year: "); scanf("%d", &y);
    printf("month: "); scanf("%d", &m);
    printf("\n");

    printf(" mon ");
    printf(" tue ");
    printf(" wed ");
    printf(" thu ");
    printf(" fry ");
    printf(" sat ");
    printf(" sun ");
    printf("\n");
    printf("\n");

    a=0;
    for(h=1;h<y;h++)
        if (nissuu(h, 2)==29)
            a++;

    b=0;
    for(i=1;i<m;i++){
        b=b+nissuu(y, i);
    }

    c=(a+y-1+b)%7;

    d=nissuu(y, m);
    
    for(j=0;j<c;j++){
        printf("     ");
    }
    for(day1=1;day1<=7-c;day1++){
        printf(" %2d  ", day1);
    }
    printf("\n");
    for(day2=8-c;day2<=d;day2++){
        printf(" %2d  ",day2);
         if((day2-(7-c))%7==0){
            printf("\n");
         }
    }
    printf("\n");
    return 0;
}