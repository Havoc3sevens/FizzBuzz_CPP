/*
This program solves the FizzBuzz problem with a switch
    Created by: Enrique Hurtado
    Date: 15 June 2021
    Latest update: 15 June 2021
    History:
        Date: 06/15/21 || Mod: Program written || By: Enrique Hurtado
    Purpose: N/A
    Notes: N/A
*/

#include <cstdio>

int main(void) {
    int n = 1000;
    int check;
    int count = 0;
    int fcount = 0;
    int bcount = 0;
    int fbcount = 0;

    for (int i = 1; i <= n; ++i) {
        check = (i%3==0) + (i%5==0);
        switch (check)
        {
        case 0:
            printf("%d\n", i);
            ++count;
            break;
        case 1:
            if (i%3==0) {
                printf("Fizz\n");
                ++fcount;
            } else {
                printf("Buzz\n");
                ++bcount;
            }
            break;
        case 2:
            if (i != 0){
                printf("FizzBuzz\n");
                ++fbcount;
            } else {
                printf("%d\n", i);
            }
            break;
        }
        
    }

    printf("None = %d\nFizz count = %d\nBuzz count = %d\nFizzBuzz count = %d\n", count, fcount, bcount, fbcount);
    printf("None r = %f\nFizz r = %f\nBuzz r = %f\nFizzBuzz r = %f\n", count/double(n), fcount/double(n), bcount/double(n), fbcount/double(n));
}
