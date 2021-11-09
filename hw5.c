#include<stdio.h>


int even(int a);
int odd(int a);

int even(int a)
{
    if (a % 2 == 0)
        printf("%d ", a);  
    return 0;
}

int odd(int a)           
{
    if (a % 2 == 1)               
        printf("%d ", a);       
    return 0;
}


int main()   
{
    int i;               
    int a[5] = { 0 };          

    printf("5개의 정수를 입력하세요: "); 

    for (i = 0; i < 5; i++)            
    {
        scanf_s("%d", &a[i]);          
    }

    printf("\n");

    printf("홀수 출력: ");           
    for (i = 0; i < 5; i++)               
    {
        odd(a[i]);                
    }

    printf("\n");

    printf("짝수 출력: ");
    for (i = 0; i < 5; i++)
    {
        even(a[i]);              
    }

    printf("\n");

    return 0;

}
