#include<stdio.h>
int main()
{
    void minmax(int[],int);
    int a[50],n,j;
    printf("Enter the len of the array ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    minmax(a,n);
    return 0;
}
void minmax(int a[],int n)
{
    int min=a[0];
    int max=a[0];
    for(int j=1;j<n;j++)
    {
        if(min>a[j])
        min=a[j];
        if(max<a[j])
        max=a[j];
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
}



#include<stdio.h>
int main()
{
    void facsum(int[],int);
    int a[50],n,i;
    printf("enter the len of the array= ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    facsum(a,n);
    return 0;
}
void facsum(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(int j=1;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                sum=sum+j;
            }
        }
        printf("The sum of factor of  %d is %d\n",a[i],sum);
    }
}



#include<stdio.h>
int main()
{
    void rev(int[],int);
    int a[50],n,i;
    printf("enter the len of the array= ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    rev(a,n);
    return 0;
}
void rev(int a[],int n)
{
    int temp,i;
    printf("reverse arry = ");
    for(i=0;i<n/2;i++)
    {   
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}



#include<stdio.h>
int main()
{
    int sum(int,int);
    int num,sum1=0;
    printf("enter the number = ");
    scanf("%d",&num);
    int res=sum(num,sum1);
    printf("sum of the digits of the number = %d",res);
    return 0;
}
int sum(int num,int sum1)
{
    if(num==0)
    return sum1;
    else 
    return sum(num/10,sum1+num%10);
}



#include<stdio.h>
int main()
{
    void sum(int[],int);
    int a[50],n,i;
    printf("enter the len of the array(max=50)= ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);   
    sum(a,n);
    return 0;
}
void sum(int a[],int n)
{
    int x,i;
    for ( i = 0; i < n; i++)
    {
        x=a[i];
        int sum=0;
        while(x>0)
        {
            sum=sum+x%10;
            x=x/10;
        }
        printf("The sum of the digits of the number %d is %d\n",a[i],sum);
    }
    
}



#include<stdio.h>
int main()
{
    void pal(int[],int);
    int a[50],n,i;
    printf("enter the len of the array(max=50)= ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);   
    pal(a,n);
    return 0;
}
void pal(int a[],int n)
{
    int x,sum,i,count=0;
    for ( i = 0; i < n; i++)
    {
        x=a[i],sum=0;
        while(x>0)
        {
            sum=sum*10+x%10;
            x=x/10;
        }
        if(sum==a[i])
        count++;
    }
    printf("Total  umber of the palandrom number in the array is =%d",count);
}



#include<stdio.h>
int main() 
{
    long double fact(long double);
    long double num;
    long double res;
    
    printf("Enter the number = ");
    scanf("%Lf", &num);
    
    res = fact(num);
    
    printf("The factorial of the number is = %Lf", res);
    
    return 0;
}
long double fact(long double num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fact(num - 1);
}



#include<stdio.h>
int main()
{
    int dup(int[],int);
    int n,a[50];
    printf("Enter the len of the arr");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(dup(a,n))
    printf("ELEMENT HAS THE DUPLICATE ELEMENT");
    else
    printf("DUPLICATE ELEMENT NOT PRESENT IN THE ARRAY");
}
int dup(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;i++)
        {
            if(a[i]==a[j])
            return 1;
        }
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int pre(int[],int,int);
    int ele,k,i,n,a[50];
    printf("Enter the len of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found");
    scanf("%d",&ele);
    k=pre(a,n,ele);
    if(k>0)
    printf("Element %d is present in the possition %d",ele,k);
    else
    printf("Element is not present in the array");
    return 0;
}
int pre(int a[],int n ,int ele)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            return i+1;
        }
    }
    return 0;
}


#include<stdio.h>
int main()
{
    void bubble(int[],int);
    void insert(int[],int ,int,int );
    int a[50],n,i,ele,pos;
    printf("Enter the len of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elemenet to be inserted");
    scanf("%d",&ele);
    printf("Enter the position of elemenet to be inserted");
    scanf("%d",&pos);
    insert(a,n,ele,pos);
    bubble(a,n);
    return 0;
}
void insert(int a[],int n,int ele,int pos)
// {
//     int i;
//     for(i=n;i>=pos;i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[pos-1]=ele;
//     for(i=0;i<=n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\n");    
// }
void bubble(int a[],int n)
{
    int i,j,tmp;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
        printf("%d\t",a[i]);
    }
}


#include<stdio.h>
int main()
{
    void bubble(int[],int);
    void insert(int[],int ,int,int );
    int a[50],n,i,ele,pos;
    printf("Enter the len of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elemenet to be inserted");
    scanf("%d",&ele);
    printf("Enter the position of elemenet to be inserted");
    scanf("%d",&pos);
    insert(a,n,ele,pos);
    bubble(a,n);
    return 0;
}
void insert(int a[],int n,int ele,int pos)
{
    int i;
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=ele;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");    
}
void bubble(int a[],int n)
{
    int i,j,tmp;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
        printf("%d\t",a[i]);
    }
}


#include<stdio.h>
int main()
{
    int a[5][5],r,c,i,j;
    printf("enter the row and col :");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element :");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}