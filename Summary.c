					
					/////Summary: Unit 2/////
					  //Matthew Esquivel//
					
///////////////////////////////////////////////////////////////

////Types of Programing Languages////

/*

//Types
	- Procedural Programming Language:
		Executes various statements using variables and loops to produce a result.

	- Functional Programming Language:
		Returns function values using stored data and recursive functions.

	- Object-oriented Programming Language:
		Solves specific problems through reusable collections of objects with internal and external parts.

	- Scripting Programming Language:
		Relatively not as full-fledged and require a bit of syntax to start using procedural and object oriented elements.

	- Logic Programming Language:
		Allows declarative statements and the computer takes consequences into account instead of knowing how to do a thing.

//Low Level
	Language that executes basic instructions that the computer can read.
	- Examples:
		Assembly Language 
			- Performs basic calculations and moves values to memory registers.
		Machine Language
			- Contains binary code used for software compilers and operating systems.
	- Characteristics:
		Is often not easily readable by humans because of its cryptic nature.
	- Applications:
		Allows code to be recognized by the CPU.


//High Level
	Language meant to simplify computer programming.
	- Examples:
		Python, C++, C#, Java, Pearl, Pascal, etc...
	- Characteristics:
		It is a few steps removed from machine language and closer to human language.
	- Applications:
		Allows creation of software programs and web development. 
*/

///////////////////////////////////////////////////////////////

////Program Structure////

/*

//Structure
	- Header Table:
		Array of structures each describing informations and segments needed for the system to prepare execution.
	
	- Libraries:
		Collection of resources used by programs for developing software.
		Examples: (In C, you include them by using "#include <library_name>" and in Python using "import library_name as library_abreviation").
			*/		
			<math.h>		//Mathematical C language functions library.
			<stdio.h>		//Standard C language inputs and outputs library.
			pandas			//Python language data manipulation library.
			/*			
	- Variables:
		Storage address that is paired with a symbol or name containing a value.
		Users can assign values to these variables and then call upon them again later on in the code to use them in operations.
		Types:
			*/
			char	//Single octet(one byte). Integer type.
			int		//Most natural size of integer for the machine.
			float	//Single-precision floating point value.
			double	//Double-precision floating point value.
			void	//Represents the absence of type.
			/*
		
	- Start:
		Segment that initiates the program.
		Examples:
			*/
			int main()	//This is the start segment of a program in C language.
			/*

	- Body:
		Part where the main structure of the program is placed.
		Includes cycles, operations using variables and functions are executed.

	- The End:
		Segment that ends the program.
		Gives outputs and returns values.
		Examples:
			*/
			return 0; //Returns a value of "0" used in C language whenever a value needs to be returned but it could be a variable of another type.
			/*

//Elements
	- Reserved words:
		Terms with a predefined special use which may not be used as a variable name.
		Examples:
			*/
			print	// Function in many languages to show text on the screen.
			void	// One of the return types.
			return	// Keyword used for returning a value.
			/*
	- Identifiers:
		Symbols which name language entities.
		Identifiers could include variables, types, labels, subroutines, and packages.
	- Constants:
		Value that do not change.
		Types:
			- Integer constants.
			- Real or Floating point constants.
			- Octal & Hexadecimal constants.
			- Character constants.
			- String constants.
			- Backslash character constants.
	- Operators:
		Symbol indicates to the interpreter or compiler to execute a mathematical, relational or logical operation and its final result.
		Examples:
			*/
			+	// Addition or unary plus.
			–	// Subtraction or unary minus.
			*	// Multiplication.
			<	// is less than.
			<=	// is less than or equal to.
			>	// is greater than.
			>=	// is greater than or equal to.
			==	// is equal to.
			!=	// is not equal to.
			&&	// logical AND
			||	// logical OR
			!	// logical NOT
			/*
	- Punctuation marks:
		Also called "Separators" or "Delimiters" and are used to implement the grammatical structures of a syntax.
		Examples:
			*/
			(,)			//Commas: Indicates lists and separation.
			(;)			//Semicolon: Indicates the end of a line.
			("")		//Quotes: Indicates plain text.
			({})		//Braces: Indicates what is contained in something else.
			(|)			//Pipes: Indicates a delimitant on data points.
			/*
*/

///////////////////////////////////////////////////////////////

////Debugging a Program////

/*

//Types of Errors
	- Syntax:
		Error in the syntax of a sequence of characters or tokens that is intended to be written in compile-time.
		Example:
			- Missing semicolons or extra brackets at end of a function.
	- Logic:
		Error that “makes sense” to the machine, but does not actually fit the program correctly.
		Example:
			- Null Reference Error: Mistake involving wrong or missing “machine logic.”
	- Execution:
		Error where the program is asked to do something that it cannot which "crashes" it.
		Example:
			- Asking a program to divide by 0.
		
*/

///////////////////////////////////////////////////////////////

					/////Sources/////
/*
	- https://learnxinyminutes.com/docs/c/
	- https://www.typesnuses.com/types-of-programming-languages-with-differences/
	- https://techterms.com/definition/low-level_language
	- https://techterms.com/definition/high-level_language
	- https://docs.oracle.com/cd/E19683-01/816-1386/chapter6-83432/index.html
	- https://www.tutorialspoint.com/cprogramming/c_variables.htm
	- http://www.trytoprogram.com/c-programming/c-programming-operators/
	- https://www.hedgethink.com/3-basic-types-programming-errors/
*/