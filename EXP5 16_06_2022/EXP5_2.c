#include<stdio.h>

int main()
  {
   int i,j,n,total=0,pos,temp;
   float avg_wt,avg_tat;
   printf("\nShortest Job First Scheduling\n");
   printf("\nEnter number of process:");
   scanf("%d",&n);
   int bt[n],p[n],wt[n],tat[n];
   printf("\nEnter Burst Time:\n");
   
   for(i=0;i<n;i++)
    {
     printf("P[%d]:",i+1);
     scanf("%d",&bt[i]);
     p[i]=i+1;         
    }
   
   for(i=0;i<n;i++)
    {
     pos=i;
     
      for(j=i+1;j<n;j++)
        {
         if(bt[j]<bt[pos])
         pos=j;
        }
 
      temp=bt[i];
      bt[i]=bt[pos];
      bt[pos]=temp;
      temp=p[i];
      p[i]=p[pos];
      p[pos]=temp;
    }
    
    wt[0]=0;            
  
  for(i=1;i<n;i++)
    {
     wt[i]=0;
     
      for(j=0;j<i;j++)
          wt[i]+=bt[j];
     total+=wt[i];
    }
  
  avg_wt=(float)total/n;      
  total=0;
  printf("\nProcess\t    Burst Time    \tWaiting Time\tTurn Around Time");
  
  for(i=0;i<n;i++)
    {
     tat[i]=bt[i]+wt[i];   
     total+=tat[i];
     printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
    
    avg_tat=(float)total/n;    
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turn Around Time=%f\n",avg_tat);
}
