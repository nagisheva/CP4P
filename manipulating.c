#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"
void manipulating() {
	printf("*** Start of Concatenating Strings Demo ***\n");
	char string1[80]; //declaration of char array
	char string2[80]; //declaration of char array
	while (TRUE) { //loop to prompt user to enter words or q - to quit
	//TRUE==1 as per manipulating.h
		printf("Type the 1st string (q - to quit):\n"); //get input from user 
		gets(string1);
		if (strcmp(string1, "q") == 0) break;
		printf("Type the 2nd string:\n"); //get input from user 
		gets(string2);
		strcat(string1, string2); //concatenates string1 and string2 
		printf("Concatenated string is  \'%s\'\n", string1);

	}
	printf("*** End of Concatenating Strings Demo ***\n\n");
	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[80]; //declaration char array
	char compare2[80]; //declaration char array
	int result;
	while (TRUE) { //loop to prompt user to enter words or q - to quit 
		printf("Type the 1st string to compare (q - to quit):\n"); // get input from user 
		gets(compare1);
		if (strcmp(compare1, "q") == 0)  break;
		printf("Type the 2nd string to compare:\n"); // get input from user 
		gets(compare2);
		result = strcmp(compare1, compare2);
		if (result < 0) // if condition implemented 
			printf("1st string is less than 2nd\n"); //if resut < 0 this line will be printed.
		else if (result == 0)
			printf("1st string is equal to 2nd\n"); // if result = 0 this line will be printed.
		else
			printf("1st string is greater than 2nd\n"); // if result is neither = not < then this line will be printed.
	}
	printf("*** End of Comapring Strings Demo ***\n\n");
}
