#include <stdio.h>

int main(void)
{
    const double GRAMS_IN_LBS = 453.5924;
    
    int coffee1BagWeight, coffee2BagWeight, coffee3BagWeight;
    int dailyServing;
    
    char coffee1Type, coffee2Type, coffee3Type;
    char coffee1WithCream, coffee2WithCream, coffee3WithCream;
    char coffeeStrength, likeWithCream;
    
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");

    printf("Enter the coffee product information being sold today...\n\n");
    
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffee1Type);
    printf("Bag weight (g): ");
    scanf(" %d", &coffee1BagWeight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee1WithCream);
    
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffee2Type);
    printf("Bag weight (g): ");
    scanf(" %d", &coffee2BagWeight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee2WithCream);
    
    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffee3Type);
    printf("Bag weight (g): ");
    scanf(" %d", &coffee3BagWeight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee3WithCream);
    
    printf("\n---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", coffee1Type == 'L' || coffee1Type == 'l', coffee1Type == 'M' || coffee1Type == 'm', coffee1Type == 'R' || coffee1Type == 'r', coffee1BagWeight, coffee1BagWeight / GRAMS_IN_LBS, coffee1WithCream == 'y' || coffee1WithCream == 'Y');
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", coffee2Type == 'L' || coffee2Type == 'l', coffee2Type == 'M' || coffee2Type == 'm', coffee2Type == 'R' || coffee2Type == 'r', coffee2BagWeight, coffee2BagWeight / GRAMS_IN_LBS, coffee2WithCream == 'y' || coffee2WithCream == 'Y');
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n\n", coffee3Type == 'L' || coffee3Type == 'l', coffee3Type == 'M' || coffee3Type == 'm', coffee3Type == 'R' || coffee3Type == 'r', coffee3BagWeight, coffee3BagWeight / GRAMS_IN_LBS, coffee3WithCream == 'y' || coffee3WithCream == 'Y');
    
    printf("Enter how you like your coffee...\n\n");
    
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &likeWithCream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &dailyServing);
    
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", ((coffee1Type == 'L' || coffee1Type == 'l') && (coffeeStrength == 'L' || coffeeStrength == 'l' )) || ((coffee1Type == 'M' || coffee1Type == 'm') && (coffeeStrength == 'M' || coffeeStrength == 'm')) || ((coffee1Type == 'R' || coffee1Type == 'r') && (coffeeStrength == 'R' || coffeeStrength == 'r')), (coffee1BagWeight == 250 && (dailyServing >= 1 && dailyServing <= 4)) || (coffee1BagWeight == 500 && (dailyServing >= 5 && dailyServing <= 9)) || (coffee1BagWeight == 1000 && dailyServing >= 10), ((coffee1WithCream == 'Y' || coffee1WithCream == 'y') && (likeWithCream == 'Y' || likeWithCream == 'y' )) || ((coffee1WithCream == 'N' || coffee1WithCream == 'n') && (likeWithCream == 'N' || likeWithCream == 'n')));
    printf(" 2|       %d         |      %d      |   %d   |\n", ((coffee2Type == 'L' || coffee2Type == 'l') && (coffeeStrength == 'L' || coffeeStrength == 'l' )) || ((coffee2Type == 'M' || coffee2Type == 'm') && (coffeeStrength == 'M' || coffeeStrength == 'm')) || ((coffee2Type == 'R' || coffee2Type == 'r') && (coffeeStrength == 'R' || coffeeStrength == 'r')), (coffee2BagWeight == 250 && (dailyServing >= 1 && dailyServing <= 4)) || (coffee2BagWeight == 500 && (dailyServing >= 5 && dailyServing <= 9)) || (coffee2BagWeight == 1000 && dailyServing >= 10), ((coffee2WithCream == 'Y' || coffee2WithCream == 'y') && (likeWithCream == 'Y' || likeWithCream == 'y' )) || ((coffee2WithCream == 'N' || coffee2WithCream == 'n') && (likeWithCream == 'N' || likeWithCream == 'n')));
    printf(" 3|       %d         |      %d      |   %d   |\n", ((coffee3Type == 'L' || coffee3Type == 'l') && (coffeeStrength == 'L' || coffeeStrength == 'l' )) || ((coffee3Type == 'M' || coffee3Type == 'm') && (coffeeStrength == 'M' || coffeeStrength == 'm')) || ((coffee3Type == 'R' || coffee3Type == 'r') && (coffeeStrength == 'R' || coffeeStrength == 'r')), (coffee3BagWeight == 250 && (dailyServing >= 1 && dailyServing <= 4)) || (coffee3BagWeight == 500 && (dailyServing >= 5 && dailyServing <= 9)) || (coffee3BagWeight == 1000 && dailyServing >= 10), ((coffee3WithCream == 'Y' || coffee3WithCream == 'y') && (likeWithCream == 'Y' || likeWithCream == 'y' )) || ((coffee3WithCream == 'N' || coffee3WithCream == 'n') && (likeWithCream == 'N' || likeWithCream == 'n')));
    
    printf("\nEnter how you like your coffee...\n\n");
    
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &likeWithCream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &dailyServing);
    
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", ((coffee1Type == 'L' || coffee1Type == 'l') && (coffeeStrength == 'L' || coffeeStrength == 'l' )) || ((coffee1Type == 'M' || coffee1Type == 'm') && (coffeeStrength == 'M' || coffeeStrength == 'm')) || ((coffee1Type == 'R' || coffee1Type == 'r') && (coffeeStrength == 'R' || coffeeStrength == 'r')), (coffee1BagWeight == 250 && (dailyServing >= 1 && dailyServing <= 4)) || (coffee1BagWeight == 500 && (dailyServing >= 5 && dailyServing <= 9)) || (coffee1BagWeight == 1000 && dailyServing >= 10), ((coffee1WithCream == 'Y' || coffee1WithCream == 'y') && (likeWithCream == 'Y' || likeWithCream == 'y' )) || ((coffee1WithCream == 'N' || coffee1WithCream == 'n') && (likeWithCream == 'N' || likeWithCream == 'n')));
    printf(" 2|       %d         |      %d      |   %d   |\n", ((coffee2Type == 'L' || coffee2Type == 'l') && (coffeeStrength == 'L' || coffeeStrength == 'l' )) || ((coffee2Type == 'M' || coffee2Type == 'm') && (coffeeStrength == 'M' || coffeeStrength == 'm')) || ((coffee2Type == 'R' || coffee2Type == 'r') && (coffeeStrength == 'R' || coffeeStrength == 'r')), (coffee2BagWeight == 250 && (dailyServing >= 1 && dailyServing <= 4)) || (coffee2BagWeight == 500 && (dailyServing >= 5 && dailyServing <= 9)) || (coffee2BagWeight == 1000 && dailyServing >= 10), ((coffee2WithCream == 'Y' || coffee2WithCream == 'y') && (likeWithCream == 'Y' || likeWithCream == 'y' )) || ((coffee2WithCream == 'N' || coffee2WithCream == 'n') && (likeWithCream == 'N' || likeWithCream == 'n')));
    printf(" 3|       %d         |      %d      |   %d   |\n", ((coffee3Type == 'L' || coffee3Type == 'l') && (coffeeStrength == 'L' || coffeeStrength == 'l' )) || ((coffee3Type == 'M' || coffee3Type == 'm') && (coffeeStrength == 'M' || coffeeStrength == 'm')) || ((coffee3Type == 'R' || coffee3Type == 'r') && (coffeeStrength == 'R' || coffeeStrength == 'r')), (coffee3BagWeight == 250 && (dailyServing >= 1 && dailyServing <= 4)) || (coffee3BagWeight == 500 && (dailyServing >= 5 && dailyServing <= 9)) || (coffee3BagWeight == 1000 && dailyServing >= 10), ((coffee3WithCream == 'Y' || coffee3WithCream == 'y') && (likeWithCream == 'Y' || likeWithCream == 'y' )) || ((coffee3WithCream == 'N' || coffee3WithCream == 'n') && (likeWithCream == 'N' || likeWithCream == 'n')));
    
    printf("\nHope you found a product that suits your likes!\n");
    
    return 0;
}
