#include<stdio.h>
int Det_Day(int y,int m,int q)
{
    int h ;
    if(m==1||m==2)
    {
        m = m+12;
        y = y-1;
    }
    h = (q+(26*(m+1)/10)+y+(y/4)+(6*(y/100))+(y/400))%7;
    return h;

}
int main()
{
    int y,m,q,h;
    printf("Enter year :\n");
    scanf("%d",&y);
    printf("Enter month(1-12):\n");
    scanf("%d",&m);
    printf("Enter day :\n");
    scanf("%d",&q);
    printf("\n");
    h = Det_Day(y,m,q);
    if(m==1)
    {
        if(h==0)
            printf("January %d, %d is Saturday",q,y);
        if(h==1)
            printf("January %d, %d is Sunday",q,y);
        if(h==2)
            printf("January %d, %d is Monday",q,y);
        if(h==3)
            printf("January %d, %d is Tuesday",q,y);
        if(h==4)
            printf("January %d, %d is Wednesday",q,y);
        if(h==5)
            printf("January %d, %d is Thursday",q,y);
        if(h==6)
            printf("January %d, %d is Friday",q,y);
    }
    if(m==2)
    {
        if(h==0)
            printf("February %d, %d is Saturday",q,y);
        if(h==1)
            printf("February %d, %d is Sunday",q,y);
        if(h==2)
            printf("February %d, %d is Monday",q,y);
        if(h==3)
            printf("February %d, %d is Tuesday",q,y);
        if(h==4)
            printf("February %d, %d is Wednesday",q,y);
        if(h==5)
            printf("February %d, %d is Thursday",q,y);
        if(h==6)
            printf("February %d, %d is Friday",q,y);
    }
    if(m==3)
    {
        if(h==0)
            printf("March %d, %d is Saturday",q,y);
        if(h==1)
            printf("March %d, %d is Sunday",q,y);
        if(h==2)
            printf("March %d, %d is Monday",q,y);
        if(h==3)
            printf("March %d, %d is Tuesday",q,y);
        if(h==4)
            printf("March %d, %d is Wednesday",q,y);
        if(h==5)
            printf("March %d, %d is Thursday",q,y);
        if(h==6)
            printf("March %d, %d is Friday",q,y);
    }
    if(m==4)
    {
        if(h==0)
            printf("April %d, %d is Saturday",q,y);
        if(h==1)
            printf("April %d, %d is Sunday",q,y);
        if(h==2)
            printf("April %d, %d is Monday",q,y);
        if(h==3)
            printf("April %d, %d is Tuesday",q,y);
        if(h==4)
            printf("April %d, %d is Wednesday",q,y);
        if(h==5)
            printf("April %d, %d is Thursday",q,y);
        if(h==6)
            printf("April %d, %d is Friday",q,y);
    }
    if(m==5)
    {
        if(h==0)
            printf("May %d, %d is Saturday",q,y);
        if(h==1)
            printf("May %d, %d is Sunday",q,y);
        if(h==2)
            printf("May %d, %d is Monday",q,y);
        if(h==3)
            printf("May %d, %d is Tuesday",q,y);
        if(h==4)
            printf("May %d, %d is Wednesday",q,y);
        if(h==5)
            printf("May %d, %d is Thursday",q,y);
        if(h==6)
            printf("May %d, %d is Friday",q,y);
    }
    if(m==6)
    {
        if(h==0)
            printf("June %d, %d is Saturday",q,y);
        if(h==1)
            printf("June %d, %d is Sunday",q,y);
        if(h==2)
            printf("June %d, %d is Monday",q,y);
        if(h==3)
            printf("June %d, %d is Tuesday",q,y);
        if(h==4)
            printf("June %d, %d is Wednesday",q,y);
        if(h==5)
            printf("June %d, %d is Thursday",q,y);
        if(h==6)
            printf("June %d, %d is Friday",q,y);
    }
    if(m==7)
    {
        if(h==0)
            printf("July %d, %d is Saturday",q,y);
        if(h==1)
            printf("July  %d, %d is Sunday",q,y);
        if(h==2)
            printf("July  %d, %d is Monday",q,y);
        if(h==3)
            printf("July  %d, %d is Tuesday",q,y);
        if(h==4)
            printf("July  %d, %d is Wednesday",q,y);
        if(h==5)
            printf("July  %d, %d is Thursday",q,y);
        if(h==6)
            printf("July  %d, %d is Friday",q,y);
    }
    if(m==8)
    {
        if(h==0)
            printf("August %d, %d is Saturday",q,y);
        if(h==1)
            printf("August %d, %d is Sunday",q,y);
        if(h==2)
            printf("August %d, %d is Monday",q,y);
        if(h==3)
            printf("August %d, %d is Tuesday",q,y);
        if(h==4)
            printf("August %d, %d is Wednesday",q,y);
        if(h==5)
            printf("August %d, %d is Thursday",q,y);
        if(h==6)
            printf("August %d, %d is Friday",q,y);
    }
    if(m==9)
    {
        if(h==0)
            printf("September %d, %d is Saturday",q,y);
        if(h==1)
            printf("September %d, %d is Sunday",q,y);
        if(h==2)
            printf("September %d, %d is Monday",q,y);
        if(h==3)
            printf("September %d, %d is Tuesday",q,y);
        if(h==4)
            printf("September %d, %d is Wednesday",q,y);
        if(h==5)
            printf("September %d, %d is Thursday",q,y);
        if(h==6)
            printf("September %d, %d is Friday",q,y);
    }
    if(m==10)
    {
        if(h==0)
            printf("October %d, %d is Saturday",q,y);
        if(h==1)
            printf("October %d, %d is Sunday",q,y);
        if(h==2)
            printf("October %d, %d is Monday",q,y);
        if(h==3)
            printf("October %d, %d is Tuesday",q,y);
        if(h==4)
            printf("October %d, %d is Wednesday",q,y);
        if(h==5)
            printf("October %d, %d is Thursday",q,y);
        if(h==6)
            printf("October %d, %d is Friday",q,y);
    }
    if(m==11)
    {
        if(h==0)
            printf("November %d, %d is Saturday",q,y);
        if(h==1)
            printf("November %d, %d is Sunday",q,y);
        if(h==2)
            printf("November %d, %d is Monday",q,y);
        if(h==3)
            printf("November %d, %d is Tuesday",q,y);
        if(h==4)
            printf("November %d, %d is Wednesday",q,y);
        if(h==5)
            printf("November %d, %d is Thursday",q,y);
        if(h==6)
            printf("November %d, %d is Friday",q,y);
    }
    if(m==12)
    {
        if(h==0)
            printf("December %d, %d is Saturday",q,y);
        if(h==1)
            printf("December %d, %d is Sunday",q,y);
        if(h==2)
            printf("December %d, %d is Monday",q,y);
        if(h==3)
            printf("December %d, %d is Tuesday",q,y);
        if(h==4)
            printf("December %d, %d is Wednesday",q,y);
        if(h==5)
            printf("December %d, %d is Thursday",q,y);
        if(h==6)
            printf("December %d, %d is Friday",q,y);
    }
    printf("\n");
    return 0;
}
