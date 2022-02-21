#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<errno.h>
#include<string.h>

void Test();
void GetMemory(char** p);

struct S2
{
	int n;
	int arr[];
};