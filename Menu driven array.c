#include<stdio.h>
#include<windows.h>
int i,j,c,f,t,n,n1,indata,deldata,sdata,pos,a[100];
char ch;
void sorting(int a[]);
void insert(int a[],int,char);
void append(int a[],int );
void Delete(int a[],int,char);
int search(int a[],int,char);
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{


    do
    {
        system("cls");
        gotoxy(40,4);
        printf("Choose-");
        gotoxy(45,5);
        printf("1. for taking input\n");
        gotoxy(45,6);
        printf("2. for diplay\n");
        gotoxy(45,7);
        printf("3. for sorting\n");
        gotoxy(45,8);
        printf("4. for inserting\n");
        gotoxy(45,9);
        printf("5. for appending\n");
        gotoxy(45,10);
        printf("6. for deleting\n");
        gotoxy(45,11);
        printf("7. for searching\n");
        gotoxy(45,12);
        printf("8. for exit\n");
        gotoxy(45,13);
        printf("Enter your choice");
        gotoxy(45,14);
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("How many datas?\n");
            scanf("%d",&n);
            for(i=0; i<n; i++)
            {
                printf("Enter data-%d :",i+1);
                scanf("%d",&a[i]);

            }

            break;
        case 2:
            printf("\n Your datas are:\n");
            for(i=0; i<n; i++)
            {
                printf("%3d",a[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("Sorting done\n");
            sorting(a);
            break;
        case 4:
            printf("Have you sorted your datas?(y/n)\n");
            ch =getch();
            printf("Enter the data you want to insert:");
            scanf("%d",&indata);
            insert(a,indata,ch);
            break;
        case 5:
            printf("How many datas you want to append?\n");
            scanf("%d",&n1);
            append(a,n1);
            n = n+n1;
            break;
        case 6:
            printf("Have you sorted your datas?(y/n)\n");
            ch =getch();
            printf("Enter the data you want to delete:");
            scanf("%d",&deldata);
            Delete(a,deldata,ch);
            break;
        case 7:
            printf("Have you sorted your datas?(y/n)\n");
            ch =getch();
            printf("Enter the data you want to search:");
            scanf("%d",&sdata);
            pos = search(a,sdata,ch);
            if(pos==-1)
                printf("Not found\n");
            else
                printf("%d is located in %dth position.\n ",sdata,pos+1);
            break;


        }
        system("pause");
    }
    while (c!=8);
    return 0;
}
void sorting(int a[])
{
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
void insert(int a[],int x,char ch)
{


    if(ch=='y' || ch=='Y')
    {
        i= 0;
        while(a[i]<x && i<n)i++;
        n=n+1;
        for(j=n-1; j>i; --j)
            a[j] = a[j-1];
        a[i] = x;

    }
    else if (ch=='n' || ch=='N')
    {
        a[n++] = x;
    }
}
void append(int a[],int n1)
{
    for(i=n; i<n+n1; i++)
    {
        printf("Enter data :");
        scanf("%d",&a[i]);

    }
}
void Delete(int a[],int x, char ch)
{
    i = 0;
    if(ch=='y' || ch=='Y')
    {
        while(a[i]<x && i<n)
            i++;
        for( ; i<n-1; i++)
            a[i] = a[i+1];
        n=n-1;
    }
    else if (ch=='n' || ch=='N')
    {
        while(x!=a[i] && i<n)
            i++;
        for( ; i<n-1; i++)
            a[i] = a[i+1];
        n=n-1;

    }
}
int search(int a[],int x, char ch)
{
    i = 0;
    if(ch=='y' || ch=='Y')
    {
        while(a[i]<x && i<n)
            i++;
        if(x==a[i])
            return i;
        else
            return -1;

    }
    else if (ch=='n' || ch=='N')
    {
        while(x!=a[i] && i<n)
            i++;
          if(x==a[i])
            return i;
        else
            return -1;

    }
}
