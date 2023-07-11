#include <stdio.h>

int main(void)
{
    int applesNum, orangesNum, pearsNum, tomatoesNum, cabbagesNum; // Variables to store the quantity of each item needed
    int applesPick, orangesPick, pearsPick, tomatoesPick, cabbagesPick; // Variables to store the quantity of each item picked
    int continueShop = 1, pickDone = 0; // Flags for controlling the loop
    
    do
    {
        printf("Grocery Shopping\n");
        printf("================\n");
        
        printf("How many APPLES do you need? : ");
        scanf("%d", &applesNum);
        while (applesNum < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many APPLES do you need? : ");
            scanf("%d", &applesNum);
        }
        printf("\n");
        
        printf("How many ORANGES do you need? : ");
        scanf("%d", &orangesNum);
        while (orangesNum < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many ORANGES do you need? : ");
            scanf("%d", &orangesNum);
        }
        printf("\n");
        
        printf("How many PEARS do you need? : ");
        scanf("%d", &pearsNum);
        while (pearsNum < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many PEARS do you need? : ");
            scanf("%d", &pearsNum);
        }
        printf("\n");
        
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &tomatoesNum);
        while (tomatoesNum < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoesNum);
        }
        printf("\n");
        
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &cabbagesNum);
        while (cabbagesNum < 0) {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbagesNum);
        }
        printf("\n");
        
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");
        
        while (applesNum > 0 && !pickDone)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &applesPick);
            
            if (applesPick > applesNum)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", applesNum);
            }
            else if (applesPick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (applesPick < applesNum && applesPick > 0)
            {
                printf("Looks like we still need some APPLES...\n");
                applesNum -= applesPick;
            }
            else
            {
                printf("Great, that's the apples done!\n\n");
                pickDone = 1; // Set the flag indicating apples have been picked
            }
        }
        pickDone = 0; // Reset the pickDone flag for the next iteration
            
        while (orangesNum > 0 && !pickDone)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &orangesPick);
            
            if (orangesPick > orangesNum)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", orangesNum);
            }
            else if (orangesPick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (orangesPick < orangesNum && orangesPick > 0)
            {
                printf("Looks like we still need some ORANGES...\n");
                orangesNum -= orangesPick;
            }
            else
            {
                printf("Great, that's the oranges done!\n\n");
                pickDone = 1;
            }
        }
        pickDone = 0;
        
        while (pearsNum > 0 && !pickDone)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pearsPick);
            
            if (pearsPick > pearsNum)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pearsNum);
            }
            else if (pearsPick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (pearsPick < pearsNum && pearsPick > 0)
            {
                printf("Looks like we still need some PEARS...\n");
                pearsNum -= pearsPick;
            }
            else
            {
                printf("Great, that's the pears done!\n\n");
                pickDone = 1;
            }
        }
        pickDone = 0;
        
        while (tomatoesNum > 0 && !pickDone)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &tomatoesPick);
            
            if (tomatoesPick > tomatoesNum)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoesNum);
            }
            else if (tomatoesPick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (tomatoesPick < tomatoesNum && tomatoesPick > 0)
            {
                printf("Looks like we still need some TOMATOES...\n");
                tomatoesNum -= tomatoesPick;
            }
            else
            {
                printf("Great, that's the tomatoes done!\n\n");
                pickDone = 1;
            }
        }
        pickDone = 0;
        
        while (cabbagesNum > 0 && !pickDone)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &cabbagesPick);
            
            if (cabbagesPick > cabbagesNum)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbagesNum);
            }
            else if (cabbagesPick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (cabbagesPick < cabbagesNum && cabbagesPick > 0)
            {
                printf("Looks like we still need some CABBAGES...\n");
                cabbagesNum -= cabbagesPick;
            }
            else
            {
                printf("Great, that's the cabbages done!\n\n");
                pickDone = 1;
            }
        }
        
        printf("All the items are picked!\n");
        
        // Prompt to continue shopping or not
        printf("\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &continueShop);
        printf("\n");
    } while (continueShop == 1);
    
    printf("Your tasks are done for today - enjoy your free time!\n");
    
    return 0;
}
