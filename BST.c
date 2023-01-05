#include<stdio.h>
#include<windows.h>
#include<conio.h>
void BST(int[],int,int);
void inorder(int[],int);
void preorder(int[],int);
void postorder(int[],int);
void Delete(int[],int,int);
int height(int[],int);
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
    int a[100], i,data,deldata,root,index;
     for(i=1;i<=100;i++){
            a[i] = -1;
        }
            a[1]=8; a[2]=3;a[3]=10;a[4]=1;a[5]=6;
        char ch;

    int c;

    do
    {
        system("cls");
        gotoxy(30,4);
        printf("Choose-");
        gotoxy(35,5);
        printf("1. To insert a new value\n");
        gotoxy(35,6);
        printf("2. To know the height of a node containing the inputted value\n");
        gotoxy(35,7);
        printf("3. To display the datas in (a)Inorder, (b)Pre-order,(c)Post order traversal\n");
        gotoxy(35,8);
        printf("4. To delete an element\n");
        gotoxy(35,9);
        printf("5. To know the maximum height of the tree\n");
        gotoxy(35,10);
        printf("6. To exit\n");
        gotoxy(35,11);
        printf("Enter your choice");
        gotoxy(35,12);
        scanf("%d",&c);
         switch(c)
    {
    case 1:

        do{
        printf("Enter your data :");
        scanf("%d",&data);
        BST(a,data,1);
        printf("Do you want to add another data?(y/n)\n");
        ch = getch();
        } while(ch=='y'||ch=='Y');
        break;
    case 2:
        printf("Enter the root value:");
        scanf("%d",&root);
        for(i=1;i<100;i++){
            if(a[i]==root)
                index = i;
                }
            printf("Height of the node(%d) : %d\n",root,height(a,index));
            printf("\n(Number of edges has been counted as height,not nodes)\n");
            break;
    case 3:
        printf("\n(a)Inorder  :");
        inorder(a,1);
        printf("\n(b)Preorder :");
        preorder(a,1);
        printf("\n(c)Postorder:");
        postorder(a,1);
        printf("\n");
        break;
    case 4:
        printf("Enter the data you want to delete :");
        scanf("%d",&deldata);
        Delete(a,deldata,1);
        break;
    case 5:
        printf("Maximum height of the tree :%d\n",height(a,1));
        printf("\n(Number of edges has been counted as height,not nodes)\n");
        break;
    }
    system("pause");
    }
    while (c!=6);



}
void BST(int a[],int data,int index){
    if(index>=100)
        printf("No more space! sorry!");
    else if(a[index]==-1)
        a[index]= data;
    else if(data<a[index])
        BST(a,data,index*2);
    else
        BST(a,data,(index*2)+1);
}
void inorder(int a[],int index){
    if(a[index]!=-1){
        inorder(a,index*2);
        printf("%5d",a[index]);
        inorder(a,(index*2)+1);
    }
}
void preorder(int a[],int index){
    if(a[index]!=-1){
        printf("%5d",a[index]);
        preorder(a,index*2);
        preorder(a,(index*2)+1);
    }
}
void postorder(int a[],int index){
    if(a[index]!=-1){
        postorder(a,index*2);
        postorder(a,(index*2)+1);
        printf("%5d",a[index]);
    }
}
void Delete(int a[],int deldata,int index){
    int temp,index1;
    if(a[index]>deldata)
        Delete(a,deldata,index*2);
    else if(a[index]<deldata)
        Delete(a,deldata,(index*2)+1);
    else if(a[index]==deldata){
        if(a[index*2]==-1 && a[(index*2)+1]==-1)
            a[index]=-1;
        else if(a[index*2]!=-1 && a[(index*2)+1]==-1){
            temp = a[index*2];
            a[index]=temp;
             Delete(a,temp,index*2);

        }
    else if(a[index*2]==-1 && a[(index*2)+1]!=-1){
            temp = a[(index*2)+1];
            a[index]=temp;
             Delete(a,temp,(index*2)+1);

        }
     else if(a[index*2]!=-1 && a[(index*2)+1]!=-1){
            index1 = (index*2)+1;
            while(a[index1*2]!=-1){
                index1 = index1*2;
            }
             temp = a[index1];
            a[index]=temp;
             Delete(a,temp,index1);

        }
    }
}

int height(int a[],int index){
    if(a[index]==-1)
        return -1;
    else{
    int leftheight = height( a,index*2);
    int rightheight =height( a,(index*2)+1);
    if(leftheight > rightheight)
        return leftheight+1;
    else
        return rightheight+1;
    }
}
