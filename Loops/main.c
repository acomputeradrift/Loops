//
//  main.c
//  Loops
//
//  Created by Jamie on 2018-05-20.
//  Copyright © 2018 Jamie. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
for (int numbers = 1; numbers < 101; numbers++)

    {
        if(numbers%3==0) //if the remainder is 0, meaning perfect division
            printf("Fizz");
        if(numbers%5==0)
            printf("Buzz");
        //if(numbers%3==0 && numbers%5==0)
            //printf(" "); //if I take this out, it doesn't print the numbers?
        if(numbers%3!=0 && numbers%5!=0) // if the remainders are NOT equal to zero for both
            printf("%d",numbers);
        
        printf("\n");
    }

    return 0;
}
