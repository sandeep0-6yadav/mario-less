#include <stdio.h>

/* I am having problem with user inputs such as 5abc, 1xyz. since scanf only check for first int value.
    i am not sure how it can be corrected.*/

int main()
{
    int height;
    int value;
   do
   {
     printf("Enter the height of the pyramid (a positive integer): ");
        value = scanf("%d", &height);
        if(value != 1 || height <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        while(getchar() != '\n'); // stops infinte loop due to charater input.//
    }
   } while (value !=1 || height <=0);
           
        for(int i=0; i<height+1; i++)
        {   
        for(int j=0; j<height-i; j++)
        {
            printf(" "); /*prints spaces*/
        }
        for(int k=0; k<i; k++)
        {
            printf("#"); /*prints pattern*/
        }
        printf("\n"); /*goes to next line*/
        }
    return 0;
}
