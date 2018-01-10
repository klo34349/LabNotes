#include <string.h> 		//C library string constructors
#include <stdio.h> 			//C library standard in and output


/* next we'll have 3 functions, 

overflowed, if called will print text "Execution Hijacked" and then returns

if function1 is called, it declares a local variable, a 5 character string called buffer, 
and then copies contents of variable passed to function1 into buffer

Function1 is called by default because it is in the main function, 
and passes it the first command line argument the program received

After function1 returns, main prints the text "executed normally" to the console, and the program exits
 */


void overflowed() {							
		printf("%s\n", "Execution Hijacked");
}

void function1(char *str){
		char buffer[5];
		strcpy(buffer, str);
}

void main(int argc, char *argv[])
{
	function1(argv[1]);
	printf("%s\n", "Executed normally");
}