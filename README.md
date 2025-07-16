# Calculator
A simple calculator program in C typically takes two numbers and an operator as input from the user, then performs the corresponding arithmetic operation and displays the result. This can be implemented using a switch statement to handle different operations.

**Include Header:**
  The stdio.h header is included for standard input/output functions like printf and scanf.

  
**Variable Declaration**
    choice(int): Stores the arithmetic operator number entered by the user.
    
    op1, op2 (integer): Store the two numbers for calculation. int is used to handle integer values.
    
    res (integer): Stores the outcome of the calculation.
    
    Input:
    The program prompts the user to enter an operator number and then two numbers.
    scanf(" %d", &choice); reads the  operator. 
    scanf("%d %d", &op1, &op2); reads the two integer numbers.

 
**Switch Statement**
  The switch statement evaluates the choice variable.
  
  Each case corresponds to a specific operator (+, -, *, /).
  
  The appropriate arithmetic operation is performed, and the result is stored in the res variable.
  
  Division by Zero Handling: For division, a check if (op2 != 0) is included to prevent division by zero, which would cause a runtime error. An error message is printed if op2 is zero.
  break; statements are used to exit the switch block after a matching case is found.  
