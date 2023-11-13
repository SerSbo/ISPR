// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>


int _tmain(int argc, _TCHAR* argv[])
{
	
		int K = 2, M = 3, N = 4;
		
		int res = M % 2 + N % 2 + K % 2;
		if (res == 3){
			K *= K;
			M *= M;
			N *= N;
		}
		if (res == 2){
			if (M % 2 == 0)
			{
				M++;
			}
			if (N % 2 == 0)
			{
				N++;
			}
			if (K % 2 == 0) 
			{ 
				K++;
			}
		}
		if (res == 1){
			if (M % 2 == 1)
			{
				M *= 2;
			}
			if (N % 2 == 1)
			{
				N *= 2;
			}
			if (K % 2 == 1)
			{
				K *= 2;
			}
		}
		printf("K=%d.M=%d.N=%d", K, M, N);
		return 0;
	
}

