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