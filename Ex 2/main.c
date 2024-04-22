#include "Ex2.h"
int main() {
    int n , i;
    int f;
    queue q;
    create(&q);
    printf("give the number of values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("give a value");
        scanf("%d",&f);
        if (isprime(f))
        {
            enqueue(f,&q);
        }
    }
    display(q);
}
