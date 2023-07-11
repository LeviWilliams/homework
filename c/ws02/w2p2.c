#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    
    double priceS, priceM, priceL, grandSubtotal, grandTotal;
    
    int patShirtNum, salShirtNum, tomShirtNum, patSubTotal, salSubTotal, tomSubTotal, patCalcTax, salCalcTax, tomCalcTax, patTotal, salTotal, tomTotal, finalSubtotal, finalTax, finalTotal;
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &priceS);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &priceM);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &priceL);
    
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n", priceS);
    printf("MEDIUM : $%.2lf\n", priceM);
    printf("LARGE  : $%.2lf\n\n", priceL);
    
    printf("Patty\'s shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &patShirtNum);
    
    printf("\n");
    printf("Tommy\'s shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tomShirtNum);
    
    printf("\n");
    printf("Sally\'s shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &salShirtNum);
    
    patSubTotal = priceS * 100 * patShirtNum + 0.5;
    salSubTotal = priceM * 100 * salShirtNum + 0.5;
    tomSubTotal = priceL * 100 * tomShirtNum + 0.5;
    
    patCalcTax = patSubTotal * TAX + 0.5;
    salCalcTax = salSubTotal * TAX + 0.5;
    tomCalcTax = tomSubTotal * TAX + 0.5;
    
    patTotal = patSubTotal + patCalcTax;
    salTotal = salSubTotal + salCalcTax;
    tomTotal = tomSubTotal + tomCalcTax;
    
    finalSubtotal = patSubTotal + salSubTotal + tomSubTotal;
    finalTax = patCalcTax + salCalcTax + tomCalcTax;
    finalTotal = patTotal + salTotal + tomTotal;
    
    grandSubtotal = patSubTotal + salSubTotal + tomSubTotal;
    grandTotal = patTotal + salTotal + tomTotal;
    
    printf("\n");
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, priceS, patShirtNum, (double)patSubTotal / 100, (double)patCalcTax / 100, (double)patTotal / 100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, priceM, salShirtNum, (double)salSubTotal / 100, (double)salCalcTax / 100, (double)salTotal / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, priceL, tomShirtNum, (double)tomSubTotal / 100, (double)tomCalcTax / 100, (double)tomTotal / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", (double)finalSubtotal / 100, (double)finalTax / 100, (double)finalTotal / 100);
    
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", finalSubtotal / 100.0);
    printf("Toonies  %3d %9.4lf\n", finalSubtotal / 200, (finalSubtotal % 200) / 100.0);
    finalSubtotal %= 200;
    printf("Loonies  %3d %9.4lf\n", finalSubtotal / 100, (finalSubtotal % 100) / 100.0);
    finalSubtotal %= 100;
    printf("Quarters %3d %9.4lf\n", finalSubtotal / 25, (finalSubtotal % 25) / 100.0);
    finalSubtotal %= 25;
    printf("Dimes    %3d %9.4lf\n", finalSubtotal / 10, (finalSubtotal % 10) / 100.0);
    finalSubtotal %= 10;
    printf("Nickels  %3d %9.4lf\n", finalSubtotal / 5, (finalSubtotal % 5) / 100.0);
    finalSubtotal %= 5;
    printf("Pennies  %3d %9.4lf\n\n", finalSubtotal / 1, (finalSubtotal % 1) / 100.0);
    finalSubtotal %= 1;
    
    printf("Average cost/shirt: $%.4lf\n\n", grandSubtotal / (patShirtNum + salShirtNum + tomShirtNum) / 100);
    
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", finalTotal / 100.0);
    printf("Toonies  %3d %9.4lf\n", finalTotal / 200, (finalTotal % 200) / 100.0);
    finalTotal %= 200;
    printf("Loonies  %3d %9.4lf\n", finalTotal / 100, (finalTotal % 100) / 100.0);
    finalTotal %= 100;
    printf("Quarters %3d %9.4lf\n", finalTotal / 25, (finalTotal % 25) / 100.0);
    finalTotal %= 25;
    printf("Dimes    %3d %9.4lf\n", finalTotal / 10, (finalTotal % 10) / 100.0);
    finalTotal %= 10;
    printf("Nickels  %3d %9.4lf\n", finalTotal / 5, (finalTotal % 5) / 100.0);
    finalTotal %= 5;
    printf("Pennies  %3d %9.4lf\n\n", finalTotal / 1, (finalTotal % 1) / 100.0);
    finalTotal %= 1;
    
    printf("Average cost/shirt: $%.4lf\n\n", grandTotal / (patShirtNum + salShirtNum + tomShirtNum) / 100);
    
    return 0;
}
