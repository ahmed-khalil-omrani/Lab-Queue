#include "Ex 5.h"
int main() {
    int i,n;
    queue q,q1;
    create(&q);
    add_ms(&q);
    printf("give the number of the citys");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {add(&q);}
    delet_thr(&q);
    printf("-----modify--------\n");
    for(i=0;i<n;i++)
        display(&q);
}
