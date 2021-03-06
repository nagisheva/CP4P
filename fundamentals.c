// FUNDAMENTALS V1
#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
//fundamentals function definition
void fundamentals() {
	printf("*** Start of Indexing Strings Demo ***\n");
	//declaration of char array
	char buffer1[80];
	//declaration of char array
	char num_input[10];
	size_t position;
	//loop to prompt the user to enter words or q - to quit
	while (TRUE) {
		//TRUE==1 as per fundamentals.h file
		printf("Type a string (q - to quit):\n");
		//get input from a user and store it in "buffer1"
		gets(buffer1);
		//compare words string and "q". If equal exit the loop
		if (strcmp(buffer1, "q") == 0)break;
		while (TRUE) {
			printf("Type the character position within the string:\n");
			//get input from a user 
			gets(num_input);
			position = atoi(num_input);
			if (position >= strlen(buffer1)) {
				printf("Wrong position... type again, please\n");
				continue;
			}
			printf("The character found at %u position is \'%c\'\n", position, buffer1[position]);
			break;
		}

	}
	printf("*** End of Indexing String Demo ***\n\n");
	printf("*** Start of Measuring Strings Demo ***\n");
	//declaration of char array
	char buffer2[80];
	
	//loop to prompt the user to enter words or q - to quit
	while (TRUE) {
		//TRUE==1 as per fundamentals.h file
		printf("Type a string (q - to quit):\n");
		//get input from a user and store it in "buffer2"
		gets(buffer2);
		//compare words string and "q". If equal exit the loop
		if (strcmp(buffer2, "q") == 0)break;
		//print the lenght of the string
		printf("The length is %lu\n", strlen(buffer2));
	
	}
	printf("*** Start of Measuring Strings Demo ***\n\n");
// This line shows the start of conversion
	printf("*** Start of Copying String Demo***\n");
	//declaration of char array
	char destination[80];
	//declaration of char array
	char source[80];
	while (TRUE)
	// while loop used after checking the condition
	{
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");
		//gets input from user 
		printf("Type a source string (q - to quit):\n");
		// gets the input for source
		gets(source);
		//if condition implemented
		if (strcmp(source, "q") == 0) break;
		printf("New destination string is \'%s\':\n", destination);
	}
	//This line shows the end of the conversion
	printf("*** End of Copying String Demo***\n\n");
}
