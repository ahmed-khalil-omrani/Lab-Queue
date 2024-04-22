#include "Ex 5.h"
int main() {
    int i;
    queue q;
    create(&q);
    for(i=0;i<5;i++)
    {add(&q);}
    for(i=0;i<5;i++)
        display(q);
    delet_thr(&q);
    printf("-----modify--------");
    for(i=0;i<4;i++)
        display(q);
}
