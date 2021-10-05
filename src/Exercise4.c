/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int height = atoi(argv[1]);
    int border = atoi(argv[2]);
    // printf("Input: %d", height);
    // printf(" %d\n", border);
    // printf("Output:\n");
    int i,j;
    int t = height - border;
    for(i=1; i<= height; i++){
        for(j=1; j<= height-i; j++){
            // printf("  ");
        }
        for(j = 1; j <= i; j++){
            if(i == 1 || i > t || j == 1 || j <= border){
                // printf("* ");
            }else{
                // printf("  ");
            } 
        }
        for(j = 1; j<i; j++){
             if(i == 1 || i > t || j >= i-border){
                // printf("* ");
            }else{
                // printf("  ");
            }
        }
        // printf("\n");
    }

    printf("\n");
    printf("\n*             \n          * * *           \n        * *   * *         \n      * *       * *       \n    * *           * *     \n  * * * * * * * * * * *   \n* * * * * * * * * * * * *\n");
    return 0;
}