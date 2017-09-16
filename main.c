#include <stdio.h>

int main() {
    float orange_juice_price;
    printf("Enter the price of one carton of orange juice: ");
    scanf("%f", &orange_juice_price);
    printf("\n");

    int number_purchased;
    printf("Enter the number of cartons purchased: ");
    scanf("%d", &number_purchased);
    printf("\n");

    float final_cost;
    if (number_purchased % 2 == 0)
        final_cost = orange_juice_price * number_purchased / 2;
    else
        final_cost = (orange_juice_price * (number_purchased - 1) / 2) + orange_juice_price;

    printf("total cost: %.2f", final_cost);

    return 0;
}