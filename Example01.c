#include <stdio.h>

int main() {

    int items=30;
    float cost_per_item=9.5 ;
    float total_cost=items*cost_per_item;
    char currency='$';

    printf("Total items : %d\n",items);
    printf("Cost per item %.2f %c\n",cost_per_item,currency);
    printf("Total cost = %.2f %c\n",total_cost,currency);
    return 0;
}
