#include<stdio.h>


int even(int a); //반환값이 정수형인 even 함수 선언
int odd(int a); //반환값이 정수형인 odd 함수 선언

int even(int a)                //even함수 (짝수만 출력하는 함수) 구현
{
    if (a % 2 == 0)                 //만약 a를 2로나누어서 나머지가 0 이라면
        printf("%d ", a);        //a를 출력한다.
    return 0;
}

int odd(int a)                 //odd함수 (홀수만 출력하는 함수) 구현
{
    if (a % 2 == 1)                 //만약 a를 2로나누어서 나머지가 1 이라면
        printf("%d ", a);        //a를 출력한다.
    return 0;
}


int main()   
{
    int i;                    //정수형 i 선언
    int a[5] = { 0 };            //정수형 배열 a[10] 선언 a[0]~a[9]

    printf("5개의 정수를 입력하세요: "); 

    for (i = 0; i < 5; i++)                //i가 0부터/ 10보다 작다의 조건을 만족할때까지/ i는 하나씩 증가  -> 열번 돌아감을 의미 0~9
    {
        scanf_s("%d", &a[i]);             //a[0]~a[9]배열에 하나씩 입력받음.
    }

    printf("\n");

    printf("홀수 출력: ");                    //홀수:라고 표시
    for (i = 0; i < 5; i++)                //열번돌아감을 의미
    {
        odd(a[i]);                   //even 함수(짝수만 출력하는 함수) 실행
    }

    printf("\n");

    printf("짝수 출력: ");
    for (i = 0; i < 5; i++)
    {
        even(a[i]);                    //odd 함수(홀수만 출력하는 함수) 실행
    }

    printf("\n");

    return 0;

}
