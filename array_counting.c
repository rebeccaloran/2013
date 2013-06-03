// src: array_counting.c
// File: array_counting
// DESCRIPTION:
//   counts the number of occurences of each digit, of white space characters
//   (blank, tab, newline), and of all other characters. This is artificial,
//   but it permits us to illustrate several aspects of C in one program.
//
  // There are twelve categories of input, so it is convenient to use an
	// array to hold the number of occurences of each digit, rather than
	// ten individual variables. 
	//
#include <stdio.h>

main()
{
  int count_char, input, whitespace, other;
  int digit[10];
				// Array subscripts always start at zero in C, so
				// the elements are ( digit[0], digit[1], ...
				// digit[9] ) 
				//
			// This is reflected in the [ for ] loops and initialize
			// and print the array.
			// 

  whitespace = other = 0;
  for (input = 0; input < 10; ++input)
      digit[input] = 0;

  while ((count_char = getchar()) != EOF)
      if (count_char >= '0' && count_char <= '9')
				// This particular program relies on the properties
				// of the character representation of the digits.
				//
			// The above test determines whether the character in
			// ( count_char ) is a digit. If it is, the numeric
			// value of that digit is ( c - '0' ). This works only if
			// ( '0', '1', ..., '9' have consecutive increasing values.
			// Fortunately, this is true for all character sets.
			//
	  ++digit[count_char-'0'];
				// By definition. [ char ]s are just small 
				// integers, so [ char ] variables and constants
				// are identical to [ int ]s in arithmetic
				// expressions. This is natural and convenient;
				//
			// For example ( c-'0' ) is an integer expression with a
			// value between 0 and 9 corresponding to the character
			// ( '0' ) to ( '9' ) stored in ( count_char ), and thus a
			// valid subscript for the array (digit).
			//
      else if (count_char == ' ' || count_char == '\n' || count_char == '\t')
	  ++whitespace;
      else
	  ++other;
				// This [ if ... else if ... else ] pattern occurs
				// frequently in programs as a way to express a
				// multi-way decision. The conditions are 
				// evaluated in order from the top until some 
				// condition is satisfied; 
				//
			// at that point the corresponding statement part is 
			// executed, and the entire construction is finished. 
			//
	        /* Any statement can be several statements enclosed in braces */
		
		// If none of the conditions is satisfied, the statement after the
		// final [ else ] is executed if it is present. If the final 
		// [ else ] and statement are omitted, as in the word count
		// program, no action takes place.
		//
	// There can be any number of
	// [ else if ](#condition)
	// #statement
	// groups between the initial [ if ] and final [ else ].
	//
  printf("digits =");
  for (input = 0; input < 10; ++input)
      printf(" %d", digit[input]);
  printf(", white space = %d, other = %d\n",
      whitespace, other);

}

