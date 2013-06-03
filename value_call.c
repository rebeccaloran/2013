// src: value_call.c
// File: vcall
// DESCRIPTION:
//

////  		    C a l l   b y   v a l u e
////
////
////

						// One aspect of C functions that
						// may be unfamiliar to programmers
						// who are used to some other 
						// languages, particularly Fortran.
						//
					// In C, all function arguments are passed
					// ``by value." This means that the called
					// function is given the values of its 
					// arguments in temporary variables rather
					// that the originals.
					//
				// This leads to some different properties than are
				// seen with ``call by reference" languages like
				// Fortran or with [ var ] parameters in Pascal,
				// in which the called routine has access to the
				// original argument, not a local copy.
				//
			// Call by value is an asset, however, not a liability. It
			// usually leads to more compact programs with fewer
			// extraneous variables, because parameters can be treated
			// as conveniently initialized local variables in the 
			// called routine.
			//

//// For example, here is a version of ( expon ) that makes use of this property:
									       ////

									       

	/*
	 * //// expon: raise [ base ] to the [ power ]th power; n >= 0; v.2 //// 
	 * 
	 * int expon(int base, int power)
	 * {
	 *     int calc;
	 *
	 *     for (calc = 1; power > 0; --power)
	 * 	  calc = calc * base;
	 *     return (((((calc)))));
	 * }
	 */
			
						// The parameter ( power ) is used
						// as a temporary variable, and is
						// counted down
						//
	/*
	 * a [ for ] loop that runs backwards
	 */

						// until it becomes zero;
						// there is no longer a need
						// for the variable [ input ]. 
						//  
					// Whatever is done to ( power ) inside
					// ( calc ) has no effect on the argument 
					// that ( calc ) was originally 
					// called with.
					//
				// When necessary, it is possible to arrange for
				// a function to modify a variable in the calling
				// routine. The caller must provide the ``address"
				// of the variable to be set
				//
			 
	/*
	 * technically a ``pointer" to the variable
	 */
				// and the called function must declare the 
				// parameter to be a pointer and access the 
				// variable indirectly through it. 
				//
					 
////				A r r a y s
////
////
////
						// The story is different for 
						// arrays. When the name of an 
						// array is used as an argument,
						// the value passed by the function
						// is the location or address of
						// the beginning of the array
						// 
	/*
	 * there is no copying of array elements.
	 */
					// By ``subscripting" this value, the
					// function can access and alter any 
					// argument of the array. 
					//
////		      C h a r a c t e r   A r r a y s
////
////
////

						// The most common type of array in
						// C is the array of characters. 
						// To illustrate the use of 
						// ``character arrays" and 
						// functions to manipulate them,
						// let's write a program that reads
						// a set of text lines and prints
						// the longest.

              

///////////////////////////////////////////////////////////////////////////////////
// The outline is simple enough:
// Just take a look below and you'll see.
///////////////////////////////////////////////////////////////////////////////////

	/*
	 * while (there's another line)
	 *     if (it's longer than the previous longest)
	 * 	    (save it)
	 *	    (save its length)
	 * print longest line
	 */






////
////
////
////

////
////
////
////

						
