#define _CRT_SECURE_NO_WARNINGS 
//Function declaration

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#ifndef __FORMULA_H__
#define __FORMULA_H__

int add(int x, int y);
void print(int x);
int cal_len(char* str);
int cal(int n);
int fibe_re(int n);
//int fibe_l(int n);
void reverse_string(char* arr);
int digitsum(int n);
double nk(int n, int k);
int rank(int arr[]);
void bubble_sort(int a[], int n);
//void qst(int left, int right);
void init(int a[10], int sz);
void reverse(int a[10], int sz);
void printc(int a[10], int sz);
void exchange(int a[], int b[], int sz);

#endif


/*
abcdef  abcdef
fbcde0  f bcde
fecd0   f
fed0


1 3 2 4
i1 k1 j4
i1 
  i3k3  j4
  i3k3 j2
  i2k3 j2
    i2k3j2
      j3
  
  
  
  */