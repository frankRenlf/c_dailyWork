#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//
//struct S 
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sta,
//	Sun
//}; 
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//union Un
//{
//	char c;
//	int i;
//};


int check_sys();

union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};