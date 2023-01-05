#include<stdio.h>
void calender(int y, int m)
{
    int h,days,i ;
    if(m==1||m==2)
    {
        m = m+12;
        y = y-1;
    }
    h = (1+(26*(m+1)/10)+y+(y/4)+(6*(y/100))+(y/400))%7;
    printf("\n");
    printf("Calender for :\n");
    printf("\n");
    if(m==13)
    {
        printf("January,%d\n",y+1);
        days = 31;
    }
    if(m==14)
    {
        printf("February,%d\n",y+1);
        if((y+1)%4==0 && (y+1)%100!=0)
            days = 29;
        else if((y+1)%100==0 && (y+1)%400==0)
            days =29;
        else
            days =28;
    }

    if(m==3)
    {
        printf("March,%d\n",y);
        days = 31;
    }
    if(m==4)
    {
        printf("April,%d\n",y);
        days = 30;
    }
    if(m==5)
    {
        printf("May,%d\n",y);
        days = 31;
    }
    if(m==6)
    {
        printf("June,%d\n",y);
        days = 30;
    }
    if(m==7)
    {
        printf("July,%d\n",y);
        days = 31;
    }
    if(m==8)
    {
        printf("August,%d\n",y);
        days = 31;
    }
    if(m==9)
    {
        printf("September,%d\n",y);
        days = 30;
    }
    if(m==10)
    {
        printf("October,%d\n",y);
        days = 31;
    }
    if(m==11)
    {
        printf("November,%d\n",y);
        days = 30;
    }
    if(m==12)
    {
        printf("December,%d\n",y);
        days =31;
    }
    printf("\n");
    printf("   SAT   SUN   MON   TUE   WED   THU   FRI\n");
    int p=1;
    printf(" ");
     while(p<6*h)
    {
        printf(" ");
        p++;
    }
    for(i=1;i<=days;i++)
    {
        printf("%6d",i);
        if((i+h)%7==0)
            printf("\n");
    }

}
int main()
{
    int y,m;
    printf("Enter year :\n");
    scanf("%d",&y);
    printf("Enter month(1-12):\n");
    scanf("%d",&m);
    calender(y,m);
    printf("\n");
    return 0;

}
