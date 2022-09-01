#include <stdio.h>
int waiting_time(int proc[], int n,int burst_time[], int wait_time[]) {
   wait_time[0] = 0;
   for (int i = 1; i < n ; i++ )
   wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
   return 0;
}

int turnaround_time( int proc[], int n,int burst_time[], int wait_time[], int tat[]) {
   // calculating turnaround time by adding
   // burst_time[i] + wait_time[i]
   int i;
   for ( i = 0; i < n ; i++)
   tat[i] = burst_time[i] + wait_time[i];
   return 0;
}

int avg_time( int proc[], int n, int burst_time[]) {
   int wait_time[n], tat[n], total_wt = 0, total_tat = 0;
   int i;
   waiting_time(proc, n, burst_time, wait_time);
   turnaround_time(proc, n, burst_time, wait_time, tat);
   printf("Processes  Burst   Waiting Turn around \n");
   for ( i=0; i<n; i++) {
      total_wt = total_wt + wait_time[i];
      total_tat = total_tat + tat[i];
      printf(" %d\t  \t%d\t   \t%d\t   \t%d\n", i+1, burst_time[i], wait_time[i], tat[i]);
   }
   printf("Average waiting time = %f\n", (float)total_wt / (float)n);
   printf("Average turn around time = %f\n", (float)total_tat / (float)n);
   return 0;
}
int main() {
   int proc[] = {1, 2, 3, 4};
   int n = sizeof proc / sizeof proc[0];
   int burst_time[] = {21, 3, 6,2};
   avg_time(proc, n, burst_time);
   return 0;
}