void roundRobinFirst(){
	tm_Quntm1 = 8;
	for (count = 0; count < totalProcess; count++)
	{
		if ((s + count)->remaining_tm <= tm_Quntm1 && (s + count)->remaining_tm > 0)
		{
			time = time + (s + count)->remaining_tm;
			(s + count)->remaining_tm = 0;
			printf("\n");
			printf("Process %d finished in 1st RR algorithm. It's\nTurn around time is %dms and Waiting time is %dms.\n", count, time, time - (str + count)->burstTime);
		}
		else if ((s + count)->remaining_tm > 0)
		{
			(s + count)->remaining_tm = (s + count)->remaining_tm - tm_Quntm1;
			time = time + tm_Quntm1;
		}
	}

	roundRobinSecond(); 
}

int main(){

	 
	(s + count)->bu_tm = (rand() % (8 + 1 - 4)) + 4; 
	(s + count)->remaning_tm = (s + count)->bu_tm; 

	count = count + 1;
	(s + count)->bu_tm = (rand() % (24 + 1 - 9)) + 9; 	
	(s + count)->remaining_tm = (s + count)->bu_tm;
    count = count + 1;
	(s + count)->bu_tm = (rand() % (50 + 1 - 25)) + 25;
	(s + count)->remaining_tm = (s + count)->bu_tm;

	for (count = 3; count < totalProcess; count++){
		(s + count)->bu_tm = (rand() % (50 + 1 - 4)) + 4; 
		(s + count)->remaining_tm = (s + count)->bu_tm;
	}

	
	printf("Process Number\t\tBurst Time\n");
	for (count = 0; count < totalProcess; count++)
		printf("%d\t\t\t%d\n", count, (s + count)->bu_tm);

	printf("\n");

	roundRobinFirst(); 
	system("pause");
	return 0;

