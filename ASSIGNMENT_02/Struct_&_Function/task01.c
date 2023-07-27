#include <stdio.h>

struct order_item {
    int quantity;
    float unit_price;
};


float calculate_Bill(struct order_item p, struct order_item v, struct order_item  w) {
    float paratha_bill = p.quantity * p.unit_price;
    float vegetables_bill = v.quantity * v.unit_price;
    float water_bill = w.quantity * w.unit_price;
    float total_bill = paratha_bill + vegetables_bill + water_bill;
    return total_bill;
}

int main() {
    struct order_item paratha, vegetables, mineral_water;
    int number_of_people;

    
    printf("Quantity Of Paratha: ");
    scanf("%d", &paratha.quantity);
    printf("Unit Price: ");
    scanf("%f", &paratha.unit_price);

    
    printf("Quantity Of Vegetables: ");
    scanf("%d", &vegetables.quantity);
    printf("Unit Price: ");
    scanf("%f", &vegetables.unit_price);

    
    printf("Quantity Of Mineral Water: ");
    scanf("%d", &mineral_water.quantity);
    printf("Unit Price: ");
    scanf("%f", &mineral_water.unit_price);

    
    printf("Number of People: ");
    scanf("%d", &number_of_people);

    
    float total_bill = calculate_Bill(paratha, vegetables, mineral_water);

    
    float amount_per_person = total_bill / number_of_people;

    
    printf("\nIndividual people will pay: %.2f TK", amount_per_person);

    return 0;
}
