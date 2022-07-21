#include<stdio.h>

int main()
	{
	 printf("\nFIFO ALGORITHM\n");
	 int i,j=0,n,a[50],frame[10],no,k,avail,count=0;
	 printf("\nEnter the number of pages :");
	 scanf("%d",&n);
	 printf("\nEnter the page number :\n");

	 for(i=1;i<=n;i++)
		 scanf("%d",&a[i]);
		 printf("\nEnter the number of frames : ");
		 scanf("%d",&no);
		 printf("Reference String");

	for(i=0;i<no;i++)
		{
		 frame[i]= -1;
		 printf("\tf%d\t",i+1);
		}
		printf("\n");

	for(i=1;i<=n;i++)
		{
		 printf("\t%d\t\t",a[i]);
		 avail=0;
		 
		 for(k=0;k<no;k++)
				if(frame[k]==a[i])
						avail=1;

				if (avail==0)
						{
   					 frame[j]=a[i];
				     j=(j+1)%no;
             count++;
             for(k=0;k<no;k++)
             printf("%d\t\t",frame[k]);
     				}
						printf("\n");
		}
	 printf("Number of page fault = %d\n",count);
	 printf("Number of page fault = %d\n",n-count);
	 return 0;
	}
