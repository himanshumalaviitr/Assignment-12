int main()
{
    reverse(0);
    getch();
    return 0;
}

// 1 first N natural no.
void Nnatural(int n)
{
    if(n==1)
     printf("1 ");
    else
    {
     Nnatural(n-1);
     printf("%d ",n);
    }
}

// 2 reverse of first N natural
void rNnatural(int n)
{
    if(n==1)
     printf("1 ");
    else
    {
     printf("%d ",n);
     rNnatural(n-1);
    }
}

// 3 first N odd natural no.
void Noddnatural(int n)
{
    if(n==1)
     printf("1 ");
    else
    {
     Noddnatural(n-1);
     printf("%d ",2*n-1);
    }
}

// 4 reverse of first N odd natural
void rNoddnatural(int n)
{
    if(n==1)
     printf("1 ");
    else
    {
     printf("%d ",2*n-1);
     rNoddnatural(n-1);
    }
}

// 5 first N even natural no.
void Nevnatural(int n)
{
    if(n==1)
     printf("2 ");
    else
    {
     Nevnatural(n-1);
     printf("%d ",2*n);
    }
}

// 6 reverse of first N even natural
void rNevnatural(int n)
{
    if(n==1)
     printf("2 ");
    else
    {
     printf("%d ",2*n);
     rNevnatural(n-1);
    }
}

// 7 squre of first N natural no.
void Nsqr(int n)
{
    if(n==1)
     printf("1 ");
    else
    {
     Nsqr(n-1);
     printf("%d ",n*n);
    }
}

// 8 binary of decimal
void DtoB(int n)
{
    int b=2;
    if(n<b)
        printf("%d",n);
    else
    {
        DtoB(n/b);
        printf("%d",n%b);
    }
}

// 9 octal of decimal
void DtoO(int n)
{
    int b=8;
    if(n<b)
        printf("%d",n);
    else
    {
        DtoO(n/b);
        printf("%d",n%b);
    }
}

// 10 reverse
void reverse(int n)
{
 if(n%10==n)
   printf("%d",n);
 else
 {
  printf("%d",n%10);
  reverse(n/10);
 }
}
