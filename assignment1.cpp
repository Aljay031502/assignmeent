#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int number;
    printf("enter the number to check even or odd\n");
    scanf("%d",& number);

    if((number % 2) ==0){

        printf("%d is even number " ,number);

    }else{
            printf("%d is odd number " ,number);
    }

    return 0;
}