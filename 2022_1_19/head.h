#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>

int my_strlen(const char* str);
char* my_strcpy(char* dest, const char* src);
char* my_strcat(char* dest, const char* src);
int my_strcmp(const char* str1, const char* str2);
char* my_strncpy(char* dest, const char* src, size_t num);
char* my_strstr(const char* str, const char* substr);
void* my_memcpy(void* dest, const void* src, size_t num);
void* my_memmove(void* dest, const void* src, size_t num);



void Next(char* T, int* next);
int KMP(char* S, char* T); 

void myNext(const char* sub, int* next, int len_sub);
void myNextval(const char* sub, int* nextval, int* next, int len_sub);
int myKMP(const char* str, const char* sub, int pos);
