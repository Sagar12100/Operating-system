#include<stdio.h> 
 
int main() 
{ 
 
  int i,p,j,n,tm,remn,m=0,t_qt,x=0,s=1,tem; 
  int wt_tm=0,turnar_tm=0,ar_tm[10],bu_tm[10],run_tm[10],prt[10],ptr[10]; 
  printf("Enter Total number of Process:\t "); 
  scanf("%d",&n); 
  remn=n; 
  for(p=0;p<n;p++) 
  { 
    printf("\n\n");
    printf("Enter Arrival Time for process %d:-",p+1); 
    scanf("%d",&ar_tm[p]); 
    printf("Enter the Burst time for process %d:-",p+1);
    scanf("%d",&bu_tm[p]);
    printf("Enter the Priority for process %d:-",p+1,"\n");
	scanf("%d",&prt[p]);
	printf("\n");
    run_tm[p]=bu_tm[p]; 
  } 
  printf("Enter Time Quantum:\t"); 
  scanf("%d",&t_qt); 
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
  for(tm=0,p=0;remn!=0;) 
  { 
    if(run_tm[p]<=t_qt && run_tm[p]>0) 
    { 
      tm+=run_tm[p]; 
      run_tm[p]=0; 
      m=1; 
    } 
    else if(run_tm[p]>0) 
    { 
      run_tm[p]-=t_qt; 
      tm+=t_qt; 
    } 
    if(run_tm[p]==0 && m==1) 
    { 
      remn--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",p+1,tm-ar_tm[p],tm-ar_tm[p]-bu_tm[p]); 
      wt_tm+=tm-ar_tm[p]-bu_tm[p]; 
      turnar_tm+=tm-ar_tm[p]; 
      m=0; 
    } 
    if(p==n-1) 
      p=0; 
    else if(ar_tm[p+1]<=tm) 
      p++; 
    else 
      p=0; 
  } 

