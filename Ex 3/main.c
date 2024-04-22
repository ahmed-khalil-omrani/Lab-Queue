
#include "Ex3.h"
int main() {
    queue q;
    queue *t;
    int n,x,i,j,a;
    create(&q);
    printf("give the numnber of queues");
    scanf("%d",&n);
    t=(queue *)malloc(n*sizeof(queue));
    printf("give the numnber of element in the queue");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("give the value %d of the queue %d",j+1,i+1);
            scanf("%d",&a);
            enqueue(a,&q);
        }
        create((t+i));
        *(t+i)=q;

    }
    for(i=0;i<n;i++)
    {
        display(*(t+i),x);
    }
}
