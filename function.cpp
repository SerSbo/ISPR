// function.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include "stdlib.h"
#include "project.h"

bool verifIndex(int a)
{
	if (a % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (verifIndex(i)){
			sum += a[i];
		}
			return sum;
	}
	
}


void myFunc(int x[])
{
	for (int i = 0; i<50; i++)
	{
		printf("result a[%d]=%d\n ",i, x[i]);
	}
	
}

int _tmain(int argc, _TCHAR* argv[])

{
	int a[50];
	int i;
	int n = sizeof(a) / sizeof(a[0]);
	for ( i = 0; i < n; i++)
	{
		a[i] = rand();
   
	}	
	myFunc(a);
	printf("sum=%d\n", sum(a, n));
	return 0;
}

