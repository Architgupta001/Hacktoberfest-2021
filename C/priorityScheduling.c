#include<stdio.h>
 void sort(int p[], int n, int pr[], int bt[])
 {   
    int i,j,pos,temp;
    //selection sort
     for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
 }
 int wait_time(int p[], int n, int wt[], int bt[])
 {
    int i,j;
    float total;
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];

        total+=wt[i];
    }
    return total;
 }

 void avg_time(int p[],int pr[], int n, int bt[])
 {
    int wt[n],tat[n],i;
    float avg_wt,avg_tat,total=0;
    sort(p, n, pr, bt);
    float tot= wait_time(p,n,wt,bt);
    avg_wt=tot/n; 
    total=0;
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i] = bt[i] + wt[i]; //turnaround time
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
 
    avg_tat=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
    
 }
 
int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,pos,temp;
    float total=0,avg_wt,avg_tat;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        printf("Priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;           
    }
 avg_time(p,pr,n,bt);
return 0;
}
