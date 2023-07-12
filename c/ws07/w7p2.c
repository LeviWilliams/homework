#include <stdio.h>

#define MAXIMUM_PATH 70
#define MINIMUM_PATH 10
#define MAX_NUM_LIVES 10
#define MIN_NUM_LIVES 1
#define MULTIPLE 5

struct PlayerInfo {
    int num_lives;
    char character_symbol;
    int num_treasure;
    int positions[MAXIMUM_PATH];
};

struct GameInfo {
    int max_num_move;
    int path_length;
    int bombs[MAXIMUM_PATH];
    int treasure[MAXIMUM_PATH];
};

int main(void) {
    struct PlayerInfo player;
    struct GameInfo game;
    
    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n\n");
    
    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.character_symbol);
    
    do {
        printf("Set the number of lives: ");
        scanf("%d", &player.num_lives);
        if (player.num_lives < MIN_NUM_LIVES || player.num_lives > MAX_NUM_LIVES) {
            printf("     Must be between %d and %d!\n", MIN_NUM_LIVES, MAX_NUM_LIVES);
        }
    } while (player.num_lives < MIN_NUM_LIVES || player.num_lives > MAX_NUM_LIVES);
    
    printf("Player configuration set-up is complete\n\n");
    
    printf("GAME Configuration\n");
    printf("------------------\n");
    
    do {
        printf("Set the path length (a multiple of %d between %d-%d): ", MULTIPLE, MINIMUM_PATH, MAXIMUM_PATH);
        scanf("%d", &game.path_length);
        if (game.path_length < MINIMUM_PATH || game.path_length > MAXIMUM_PATH || game.path_length % MULTIPLE != 0) {
            printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MINIMUM_PATH, MAXIMUM_PATH);
        }
    } while (game.path_length < MINIMUM_PATH || game.path_length > MAXIMUM_PATH || game.path_length % MULTIPLE != 0);
    
    do {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &game.max_num_move);
        if (game.max_num_move < player.num_lives || game.max_num_move > 0.75 * game.path_length) {
            printf("    Value must be between %d and %.0f\n", player.num_lives, 0.75 * game.path_length);
        }
    } while (game.max_num_move < player.num_lives || game.max_num_move > 0.75 * game.path_length);
    
    printf("\nBOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of %d where a value\n", MULTIPLE);
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.path_length);
    
    int i;
    
    for (i = 0; i < game.path_length; i += 5) {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        int j;
        for (j = i; j < i + 5; j++) {
            scanf("%d", &game.bombs[j]);
        }
    }
    printf("BOMB placement set\n\n");
    
    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of %d where a value\n", MULTIPLE);
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.path_length);
    
    for (i = 0; i < game.path_length; i += 5) {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        int j;
        for (j = i; j < i + 5; j++) {
            scanf("%d", &game.treasure[j]);
        }
    }
    printf("TREASURE placement set\n\n");
    
    printf("GAME configuration set-up is complete...\n\n");
    
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");
    printf("Player:\n");
    printf("   Symbol     : %c\n", player.character_symbol);
    printf("   Lives      : %d\n", player.num_lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n\n");
    
    printf("Game:\n");
    printf("   Path Length: %d\n", game.path_length);
    printf("   Bombs      : ");
    for (i = 0; i < game.path_length; i++) {
        printf("%d", game.bombs[i]);
    }
    printf("\n   Treasure   : ");
    for (i = 0; i < game.path_length; i++) {
        printf("%d", game.treasure[i]);
    }
    
    printf("\n\n====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n\n");
    
    int treasureFound = 0, nextMove = 0;
    char gameBoard[MAXIMUM_PATH];
    
    for (i = 0; i < game.path_length; i++) {
        gameBoard[i] = '-';
    }
    printf("  ");
    for (i = 0; i < game.path_length; i++) {
        printf("%c", gameBoard[i]);
    }
    printf("\n");
    printf("  ");
    for (i = 1; i <= game.path_length; i++) {
        if (i % 10 == 0)
            printf("%d", i / 10);
        else
            printf("|");
    }
    printf("\n");
    printf("  ");
    for (i = 1; i <= game.path_length; i++) {
        printf("%d", (i % 10));
    }
    printf("\n");
    
    for (i = 0; i < MAXIMUM_PATH; i++) {
        player.positions[i] = 0;
    }
    
    do {
        printf("+---------------------------------------------------+\n");
        printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.num_lives, treasureFound, game.max_num_move);
        printf("+---------------------------------------------------+\n");
        
        do {
            printf("Next Move [1-%d]: ", game.path_length);
            scanf(" %d", &nextMove);
            if (nextMove < 1 || nextMove > game.path_length)
                printf("  Out of Range!!!\n");
        } while (nextMove < 1 || nextMove > game.path_length);
        
        if (player.positions[nextMove - 1] == 1) {
            printf("\n===============> Dope! You've been here before!\n\n");
        }
        else {
            player.positions[nextMove - 1] = 1;
            printf("\n");
            
            if (game.bombs[nextMove - 1] == 1 && game.treasure[nextMove - 1] == 1) {
                printf("===============> [&] !!! BOOOOOM !!! [&]\n");
                printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");
                gameBoard[nextMove - 1] = '&';
                player.num_lives -= 1;
                treasureFound += 1;
            }
            else if (game.bombs[nextMove - 1] == 1) {
                printf("===============> [!] !!! BOOOOOM !!! [!]\n\n");
                gameBoard[nextMove - 1] = '!';
                player.num_lives -= 1;
            }
            else if (game.treasure[nextMove - 1] == 1) {
                printf("===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
                gameBoard[nextMove - 1] = '$';
                treasureFound += 1;
            }
            else {
                printf("===============> [.] ...Nothing found here... [.]\n\n");
                gameBoard[nextMove - 1] = '.';
            }
            game.max_num_move -= 1;
        }
        
        if (player.num_lives == 0) {
            printf("No more LIVES remaining!\n\n");
        }
        else if (game.max_num_move <= 0) {
            printf("No more MOVES remaining!\n\n");
        }
        
        printf("  ");
        for (i = 0; i < game.path_length; i++)
        {
            if (i == nextMove - 1) {
                printf("%c", player.character_symbol);
                i = game.path_length;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        printf("  ");
        for (i = 0; i < game.path_length; i++)
        {
            printf("%c", gameBoard[i]);
        }
        printf("\n");
        printf("  ");
        for (i = 1; i <= game.path_length; i++) {
            if (i % 10 == 0) {
                printf("%d", i / 10);
            }
            else {
                printf("|");
            }
        }
        printf("\n");
        printf("  ");
        for (i = 1; i <= game.path_length; i++) {
            printf("%d", (i % 10));
        }
        printf("\n");
    } while (game.max_num_move > 0 && player.num_lives > 0);
    
    printf("+---------------------------------------------------+\n");
    printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", player.num_lives, treasureFound, game.max_num_move);
    printf("+---------------------------------------------------+\n");
    
    printf("\n##################\n");
    printf("#   Game over!   #\n");
    printf("##################\n\n");
    
    printf("Play again to try to beat your score!\n");
    
    return 0;
}
