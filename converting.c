// CONVERTING V2
#define _CRT_SECURE_NO_WARNINGS
#include "converting.h" // This is used for calling the pre-defined library named converting.h


void converting() {
	printf("*** Start of Converting Strings to int Demo ***\n"); // This line shows the start of conversion
	char int_string[80]; // array used for string to store numbers enter from user.
	int int_number; // this will store the converted integer value
	while (TRUE) // while loop used after checking the condition 
	{
		printf("Type the int numeric string (q - to quit):\n"); // this prompts user to enter a number
		gets(int_string); // Gets input number from the user
		if (strcmp(int_string, "q") == 0) break; //checks for the input entered
		int_number = atoi(int_string); // Converts the number entered as a character into string using ATOI
		printf("Converted number is %d\n", int_number); // prints the output of converted number
	}
	printf("*** End of Converting Strings to int Demo ***\n\n"); //This line shows the end of the conversion
	printf("*** Start of Converting Strings to double Demo ***\n"); // This line shows the start of conversion
	char double_string[80]; // array used for string to store numbers enter from user.
	double double_number; // this will store the converted integer value
	while (TRUE) // while loop used after checking the condition 
	{
		printf("Type the double numeric string (q - to quit):\n"); // this prompts user to enter a number
		gets(double_string); // Gets input number from the user
		if (strcmp(double_string, "q") == 0) break; //checks for the input entered
		double_number = atof(double_string); // Converts the number entered as a character into string using ATOI
		printf("Converted number is %f\n", double_number); // prints the output of converted number
	}
	printf("*** Start of Converting Strings to double Demo ***\n\n"); //This line shows the end of the conversion
}
