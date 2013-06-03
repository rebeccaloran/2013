// src: exponent.c
// File: expon
// DESCRIPTION:
// raise an integer ( base ) to a positive integer ( power )
//
  /* The standard library contains a function [ pow(x,y) ] that computes
	 * this much more powerfully. This program is for demonstration purposes
	 */


#include <stdio.h>
						// The function below, 
						// before { main }:
						//

int expon(int base, int power);
	/* 
	 * tests ( expon ) function
	 *
	 */
						// says that ( expon ) is a
						// function that expects two 
						// [ int ] arguments and returns
						// an [ int ]. 
						//
					// This declaration, which is called a 
					// ``function prototype", has to agree
					// with the definition and uses of 
					// [ expon ]. It is an error in the
					// definition of a function or if any uses
					// of it do not agree with its prototype.
					//
						// Parameter names need not agree.
						// Indeed, parameter names are
						// optional in a function 
						// prototype, so for the prototype
						// we could have written:
						//
	/*
	 * int power(int, int);
	 *
	 */
						// well-chosen names are good
						// documentation, however, so
						// we will often use them.
						//				
				
			
				// I will generaly use ``parameter" to refer to a 
				// variable name in the parenthesized list in a 
				// function. The terms ``formal argument" and 
				// ``actual argument" are sometimes used for the 
				// same distinction.
				//
main()
{
    int input;

    for (input = 0; input < 10; ++input)
	printf("%d %d %d\n", input, expon(2, input), expon(-3,input));
    return (((((0)))));
}
	/*
	 *  ( calc ) raise base2 to ( power2 )-th power;
	 *  n >= 0
	 *
	 */
int expon(int base2, int power2)
{
    int input2, calc;

    calc = 1;
    for (input2 = 1; input2 <= power2; ++input2)
					// I have named the functions with a ( 2 )
					// at the end, but it should be noted that
					// the names used by ( expon ) for its
					// parameters are local to ( expon ), and
					// are not visible to any other function:
					//
				// other routines can use the same names without
				// conflict. This is also true of the variables
				// ( input ) and ( calc ); the ( input ) in 
				// ( expon ) is unrelated to the ( input ) in 
				// { main }.
				//
	calc = calc * base2;
    return (((((calc)))));			// The value that ( expon )
						// computes is returned to { main }
						// by the [ return ] statement.
						//
//// PRE-ANSI C VERSION ////
	/*
	 * expon(base, power)
	 * int base, power;
	 * {
   	 *   int input, calc;
	 *
    	 *   calc = 1;
 	 *   for (input = 1; input <= power; ++input)
	 *       calc = calc * base;
   	 *     return (((((calc)))));
	 * }
	 */

//// Any expression may follow [ return ]:  ////
					
	/*
	 *   return expression;
	 *
	 */
						
				// A function need not return a value; a [ return ]
				// statement with no expression causes control,
				// but no useful value, to be returned to the 
				// caller, as does ``falling off the end" of a 
				// function by reaching the terminating 
				// right brace. And the calling function can ignore
				// a value returned by a function.
				//
			// You may have noticed that there is a [ return ] 
			// statement at the end of { main }. Since { main } is a
			// function like any other, it may return a value to its
			// caller, which is in effect the environment in which the
			// program was executed.
			//
		// Typically, a return value of zero implies normal termination;
		// non-zero values signal unusual or erroneous termination
		// conditions. 
		//
	// In the interests of simplicity, we have omitted
	// [ return ] statements from our { main } functions up to this
	// point, but we will include them hereafter, as a reminder that programs
	// should return status to their environment.
	//
} 

						// A function definition has the 
						// following form:
						//
	/*		
	 * return-type function-name(parameter-declarations, if-any)
	 * {
	 *     declarations
	 *     statements
	 * }
	 *
	 */ 
