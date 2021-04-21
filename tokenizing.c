#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>				
#include <string.h>	
#include "tokenizing.h"

//tokenizing function definition
void tokenizing() {
	printf("*** Start of Tokenizing Words Demo ***\n");

	//create char array with (199 + \0) symbols limit
	char words[200];

	//create a pointer "word"
	char* word;

	//create int variable to count words
	int w_counter;

	//loop to prompt the user to enter words or q - to quit
	while (TRUE) {

		//TRUE==1 as per tokenizing.h file
		printf("Type a few words separated by space(q - to quit):\n");

		//get input from a user and store it in "words"
		gets(words);

		//compare words string and "q". If equal exit the loop
		if (strcmp(words, "q") == 0) break;

		//store in word first token delimited by " "
		word = strtok(words, " ");

		//set w_counter to 1
		w_counter = 1;

		// loop to print all the tokens while word is not NULL
		while (word) {

			//print word and number, add 1 to w_counter
			printf("Word #%d is \'%s\'\n", w_counter++, word);

			//next tokenizing by " ". If all word tokenized - return NULL
			word = strtok(NULL, " ");





		}


	}
	printf("*** End of Tokenizing Words Demo ***\n\n");


	printf("*** Start of Tokenizing Phrases Demo ***\n");
	
	//create char array with (199 + \0) symbols limit
	char phrases[200];
	
	//create a pointer "phrase"
	char* phrase;
	
	//create int variable to count phrases
	int p_counter;
	
	//loop to prompt the user to enter words or q - to quit
	while (TRUE) {
		
		//TRUE==1 as per tokenizing.h file
		printf("Type a few words separated by comma(q - to quit):\n");

		//get input from a user and store it in "phrases"
		gets(phrases);

		//compare phrases string and "q". If equal exit the loop
		if (strcmp(phrases, "q") == 0) break;;

		//store in phrase first token delimited by ","
		phrase = strtok(phrases, ",");
		
		//set p_counter to 1
		p_counter = 1;

		// loop to print all the tokens while word is not NULL
		while (phrase) {

			//print phrase and number, add 1 to p_counter
			printf("Word #%d is \'%s\'\n", p_counter++, phrase);

			//next tokenizing by ",". If all word tokenized - return NULL
			phrase = strtok(NULL, ",");





		}
		
		
	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
printf("*** Start of Tokenizing Sentences Demo ***\n");
 
 //create char array with (199 + \0) symbols limit
 char sentences[200];

 //create a pointer "sentence"
 char* sentence;
 
 //create int variable to count sentences
 int s_counter;
 
 //loop to prompt the user to enter words or q - to quit
  while (TRUE) {
	printf("Type a few sentences separated by dot(q - to quit):\n");
	
	//get input from a user and store it in "sentences"
	gets(sentences);
	
	//compare phrases string and "q". If equal exit the loop
	if (strcmp(sentences, "q") == 0) break;
	
	//store in sentence first token delimited by "."
	sentence = strtok(sentences, ".");
	
	//set s_counter to 1
	s_counter = 1;
	
	// loop to print all the tokens while word is not NULL
	while (sentence) {
		
		//print sentence and number, add 1 to c_counter
		printf("sentence #%d is \'%s\'\n", s_counter++, sentence);
		
		//next tokenizing by ".". If all word tokenized - return NULL
		sentence = strtok(NULL, ".");
	}

  }
 printf("*** End of Tokenizing Sentences Demo ***\n\n");
}
