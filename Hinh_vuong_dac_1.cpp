#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, j=1, n;
    printf("Nhap vao chi so n: ");
    scanf("%d", &n);
    if (n%2==0)
    {printf("Gia tri cua n phai la mot so le!\n");
    getch(); }
    else printf("Gia tri dep day ban :v\n");
    while (i<=n)
    {
          while (j<=n)
          {
                printf("* ");
                j++;
          }
          j=1;
    printf("\n");
    i++;
    }
    getch();
}
kjjhvbhgbkj
