#include <stdio.h>
#include <stdlib.h>

typedef struct { int id; int deadline; int profit; } Job;

int cmp(const void *a,const void *b){
    Job *x=(Job*)a,*y=(Job*)b;
    return (y->profit - x->profit); 
}

int main(){
    int m;
    printf("Enter number of jobs: ");
    if(scanf("%d",&m)!=1||m<=0) return 0;
    Job jobs[m];
    int maxd=0;
    for(int i=0;i<m;i++){
        printf("Job %d (id deadline profit): ", i+1);
        scanf("%d %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
        if(jobs[i].deadline>maxd) maxd=jobs[i].deadline;
    }

    qsort(jobs, m, sizeof(Job), cmp);

    int slot[maxd+1];
    for(int i=0;i<=maxd;i++) slot[i]=0; 
    int result[maxd+1];
    for(int i=0;i<=maxd;i++) result[i]=-1;

    int totalProfit=0;
    for(int i=0;i<m;i++){
        int d = jobs[i].deadline;
        if(d>maxd) d = maxd;
        for(int j=d; j>=1; j--){
            if(slot[j]==0){
                slot[j]=1;
                result[j]=i;         
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    printf("\nScheduled jobs (time slot : job_id [profit]):\n");
    for(int t=1;t<=maxd;t++){
        if(result[t] != -1){
            printf("slot %d : %d [%d]\n", t, jobs[result[t]].id, jobs[result[t]].profit);
        } else {
            printf("slot %d : -\n", t);
        }
    }
    printf("\nTotal Profit = %d\n", totalProfit);
    return 0;
}