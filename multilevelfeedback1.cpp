#include<stdio.h>
#include<stdlib.h>

int bu_tm;
int remaining_tm;

int totalProcess=4;
int time, tm_Quntm1, tm_Quntm2, *count = 0;
int *s;
void FirstComeFirstServed(){

	
	for (count = 0; count < totalProcess; count++)
	{
		if (*(s + count).remainingTime > 0)
		{
			time = time + (s + count)->remaining_tm;
			(s + count)->remaining_tm = 0;
			printf("\n");
			printf("Process %d finished in first coe first served algorithm. It's\nTurn around time is %dms and Waiting time is %dms.\n", count, time, time - (s + count)->bu_tm);
		}
	}
}

void roundRobinSecond(){
	tm_Quntm2 = 16;
	for (count = 0; count < totalProcess; count++)
	{
		if ((s + count)->remaining_tm <= tm_Quntm2 && (s + count)->remaining_tm > 0)
		{
			time = time + (s + count)->remaining_tm;
			(s + count)->remaining_tm = 0;
			printf("\n");
			printf("Process %d finished in 2nd RR algorithm. It's\nTurn around time is %dms and Waiting time is %dms.\n", count, time, time - (str + count)->burstTime);
		}
		else if ((s + count)->remaining_tm > 0)
		{
			(s + count)->remaining_tm = (s + count)->remaining_tm - tm_Quntm2;
			time = time + tm_Quntm2;
		}
	}

	FirstComeFirstServed();

}

