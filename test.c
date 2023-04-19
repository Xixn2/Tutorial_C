#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void name(int n);    // 안녕하세요 10번 출력
void num(int n);     // 10~1까지 출력
int fac(int n);      // 팩토리얼
int re_sum(int n);   // 1~100까지 합 출력
int hap(int n);      // 자릿수의 합
void binary(int n);  // 10진수 2진수로 변경
void reverse(int n); // 12345 자릿수별로 출력

int main(void) {

  /*int arr[SIZE];
  int i, j;

  for (i = 0; i < SIZE; i++) {
    printf("input number >> ");
    scanf("%d", &arr[i]);
  }
  for (j = 0; j < SIZE; j++) {
    printf("%d ", arr[j]);
  }*/

  /*double arr[SIZE];
  int i, j;

  for (i = 0; i < SIZE; i++) {
    printf("input number >> ");
    scanf("%lf", &arr[i]);
  }
  for (j = 0; j < SIZE; j++) {
    printf("%.2lf ",arr[j]);
  }*/

  /*int arr[10];
  int i, j, x;
  int max = 0;
  int min = 51;

  srand((unsigned)time(NULL));
  for (i = 0; i < 10; i++) {
    arr[i] = rand() % 50 + 1;
  }
  for (j = 0; j < 10; j++) {
    printf("%d ", arr[j]);
  }

  for (i = 0; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  for (j = 0; j < 10; j++) {
    if (arr[j] < min) {
      min = arr[j];
    }
  }
  printf("\n최대값: %d  , 최소값: %d", max, min);*/

  name(10);                              // 안녕하세요 10번 출력
  num(10);                               // 10~1까지 출력
  printf("\nfac: %d", fac(8));           // 팩토리얼
  printf("\nsum: %d", re_sum(100));      // 1~100까지 합 출력
  printf("\nhap: %d\n", hap(123456789)); // 자릿수의 합
  binary(18);                            // 10진수 2진수로 변경
  printf("\n");
  reverse(12345); // 12345 자릿수별로 출력
  return 0;
}
// 재귀함수를 이용하여 안녕하세요를 10번 출력되게 만들기
void name(int n) {
  if (n == 0) {
    return;
  }
  printf("안녕하세요\n");
  name(n - 1);
}
// 재귀함수를 이용하여 10~1까지 출력되게 만들기
void num(int n) {
  if (n == 0) {
    return;
  }
  printf("%d ", n);
  num(n - 1);
}
// 재귀함수를 이용하여 n의 팩토리얼의 값을 구하기
int fac(int n) {
  if (n == 1) {
    return 1;
  }
  return n * fac(n - 1);
}
// 재귀함수를 이용하여 1~100까지의 합을 구하기
int re_sum(int n) {
  if (n == 0) {
    return 0;
  }
  return n + re_sum(n - 1);
}
// 재귀함수를 이용하여 자릿수의 합 구하기
int hap(int n) {
  if (n == 0) {
    return 0;
  }
  return (n % 10) + hap(n / 10);
}
// 재귀함수를 이용하여 10진수를 2진수로 바꾸기
void binary(int n) {
  if (n == 0) {
    return;
  }
  binary(n / 2);
  printf("%d ", n % 2);
}
// 재귀함수를 이용하여 12345의 자릿수별로 출력
void reverse(int n) {
  if (n == 0) {
    return;
  }
  printf("%d ", n % 10);
  reverse(n / 10);
}