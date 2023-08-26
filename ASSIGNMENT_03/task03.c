#include <stdio.h>

int main()
{
    int at[20], wt[20], tat[20], bt[20], pri[20], ct[20];
    int number, temp[20], t, count = 0, small;
    float total_WT = 0, total_TAT = 0, Avg_WT, Avg_TAT;
    printf("Enter the number of Processes: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("\nEnter Process P%d\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &at[i]);
        printf("Burst Time: ");
        scanf("%d", &bt[i]);
        temp[i] = bt[i];
        printf("Priority: ");
        scanf("%d", &pri[i]);
    }

    pri[9] = 999999;

    for (t = 0; count != number; t++)
    {
        small = 9;
        for (int i = 0; i < number; i++)
        {
            if (pri[small] > pri[i] && at[i] <= t && bt[i] > 0)
            {
                small = i;
            }
        }

        bt[small] = bt[small] - 1;

        if (bt[small] == 0)
        {

            count++;
            tat[small] = t + 1 - at[small] - temp[small]; 
            wt[small] = t + 1 - at[small]; 
            ct[small] = t + 1; 
        }
    }
	
	printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < number; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", i + 1,at[i],temp[i], ct[i], wt[i], tat[i]);
    }

    return 0;
}
