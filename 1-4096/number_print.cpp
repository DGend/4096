#include <stdio.h>
void main()
{
	const int MAX = 4096;
	int num = 1;
	for(int y=0; y < 8; y++)//��ü ���ο���
	{
		for(int s_y=0; s_y < 8; s_y++)//���� �簢�� ���ο���
		{
			for(int x = 0; x < 8; x++)//��ü ���ο���
			{
				for(int s_x = 1; s_x <= 8; s_x++)//���� �簢�� ���ο���
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