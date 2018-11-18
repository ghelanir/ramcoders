#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	int quantum=2, burst[5],totalprocess=5,rem_bt[5],rt=0;
	bool free = true;
	while (totalprocess != 0)
	{
		free = true;
		for (int i = 0;i < totalprocess;i++)
		{
			if (rem_bt > 0)
			{
				free = false;
				if (rem_bt[i] > quantum)
				{
					rt = rt + quantum;
					rem_bt[i] = rem_bt[i] - quantum;
				}
				else
				{
					rt = rt + rem_bt[i];

				}
			}
		}
	}


}