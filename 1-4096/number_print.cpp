#include <stdio.h>
void main()
{
	const int MAX = 4096;
	int num = 1;
	for(int y=0; y < 8; y++)//전체 세로연산
	{
		for(int s_y=0; s_y < 8; s_y++)//작은 사각형 세로연산
		{
			for(int x = 0; x < 8; x++)//전체 가로연산
			{
				for(int s_x = 1; s_x <= 8; s_x++)//작은 사각형 가로연산
				{
					printf("%4d ",(x*64)+(s_y*8)+(y*512)+s_x);
				}
				printf("|");
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("");
}