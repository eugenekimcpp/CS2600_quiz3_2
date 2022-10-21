/* 
    Program: bill.c

    * get the user input from command line argument
        0-a.out, 1-tax, 2-tip (as in forms of percentage)

    * First, need to generate random bill with 4 menu. (Set the
      limit to 10 orders for convenient)
        - User random number generator to get number of order
        - Make an arary of int, 4 elements of each menu price
        - Use random number n % 4 (0-3) to access price at each iteration

    * Use the user argument to perform calculation

    * display
        - meal cost (pre-tax, pre-tip)
        - tax amount
        - tip amount 
        - total bill 

*/
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])
{

    if(argc != 3){
        // enter here when invaild number of argument received
        printf("Please enter the tax and tip\n");
    }
    else{
        // enter here when you only received 3 arguments 

        // generate the random bill
        double menu[] = {9.95, 4.55, 13.25, 22.35};
        const int MAX = 10; // max number of order
        int n; // actial number of order
        int bill = 0; // used to store bill
        

        time_t t; 

        srand((unsinged) time(&t)); // Init. RNG

        n = (rand() % 10) + 1; // order range 1-10

        for(int i = 0; i < n; ++i){
            int j = rand() % 4; // range 0-3
            bill = bill + menu[j]; 
        }

        // now random bill is generated. 


    }


})