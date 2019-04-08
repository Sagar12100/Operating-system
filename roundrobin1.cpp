 printf("\nAverage Waiting Time= %f\n",wt_tm*1.0/n); 
  printf("Avg Turnaround Time = %f",turnar_tm*1.0/n);
  for(i=0;i<n;i++)
  {
  	ptr[i]=prt[i];
  }
  for (i=0;i <n;i++)
    {
        for (j =0; j<(n-i-1);j++)
        {
            if (ptr[j] >ptr[j + 1])
            {
                tem =ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = tem;
            }
        }
    }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		if((ptr[i]==prt[j])&&(ptr[i]!=0))
  		{
		x=j+1;
  		printf("\nprocess %d come %d",x,s);
  		s=s+1;
	  }
	  if(ptr[i]==0)
	  {
	  	printf("\nprocess %d come %d",s);
	  }
}
  }
  return 0; 
}
