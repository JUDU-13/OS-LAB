#include<stdio.h>
 
int main()
	{
   int i,n,total = 0,x,counter = 0,quantum;
   int wt = 0,tat = 0,at[10],bt[10],temp[10];
   float awt, atat;
   printf("\nRound Robin Scheduling\n");
   printf("\nEnter Total Number of Processes: ");
   scanf("%d",&n);
   x=n;
     
   for(i=0;i<n;i++)
     {
      printf("\nEnter Details of Process[%d]\n",i+1);
      printf("Arrival Time: ");
      scanf("%d", &at[i]);
      printf("Burst Time: ");
      scanf("%d", &bt[i]);
      temp[i] = bt[i];
     }
     
   printf("\nEnter Time Quantum: ");
   scanf("%d",&quantum);
   printf("\nProcess ID\t\tBurst Time\t Turn Around Time\t Waiting Time\n");
      
   for(total = 0,i = 0; x != 0;)
     {
      if(temp[i]<=quantum && temp[i]>0)
       {
        total = total + temp[i];
        temp[i] = 0;
        counter = 1;}
       else if(temp[i] > 0)
         {
          temp[i] = temp[i] - quantum;
          total = total + quantum;}
       if(temp[i] == 0 && counter == 1)
       {
        x--;
        printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, bt[i], total - at[i], total - at[i] - bt[i]);
        wt = wt + total - at[i] - bt[i];
        tat = tat + total - at[i];
        counter = 0;
       }
       
       if(i == n-1)
       	{
       	 i = 0;
       	}
       	else if(at[i + 1] <= total)
      	 {
        	i++;
         }
       	else
        	{
       	   i = 0;
        	}
     }
 
      awt = wt * 1.0 / n;
      atat = tat * 1.0 / n;
      printf("\n\nAverage Waiting Time:%f",awt);
      printf("\nAverage Turn Around Time:%f\n",atat);
      return 0;
	}
