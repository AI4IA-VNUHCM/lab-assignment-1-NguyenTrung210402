/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    int max = -999;
    int min = 999
    ;

    if(argc < 2) {
        return 0;
    }
    else if(argc == 2) {
        int num = atoi(argv[1]);
        if(num == 0){
            return 0;
        }else{
            max = num;
            min = num;
        }
    }else{
        for(int i = 1; i < argc; i ++){
            int num = atoi(argv[i]);
            if(num == 0){
                break;
            }else{
                if(num > max){
                    max = num;
                }

                if(num < min){
                    min = num;
                }
            }
        }
    }

    

    //printf("Input: ");
    for(int i = 1; i < argc; i ++){
        int num = atoi(argv[i]);
    //    printf("%d ", num);
    }

    printf("\nMax: %d", max);
    printf("\nMin: %d", min);
    printf("\n");

	return 0;
}