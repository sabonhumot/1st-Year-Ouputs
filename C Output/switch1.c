#include <stdio.h>

int main() {
	
	char letter;
	
	printf("Enter a character: ");
	scanf("%c", &letter);
	
	switch(letter){
		case 'A':
			printf("%c is a Vowel", letter);
		break;
		case 'E':
			printf("%c is a Vowel", letter);
		break;
		case 'I':
			printf("%c is a Vowel", letter);
		break;
		case 'O':
			printf("%c is a Vowel", letter);
		break;
		case 'U':
			printf("%c is a Vowel", letter);
		break;
		case 'a':
			printf("%c is a Vowel", letter);
		break;
		case 'e':
			printf("%c is a Vowel", letter);
		break;
		case 'i':
			printf("%c is a Vowel", letter);
		break;
		case 'o':
			printf("%c is a Vowel", letter);
		break;
		case 'u':
			printf("%c is a Vowel", letter);
		break;
		default:
			printf("%c is a Consonant", letter);	
	}	
	return 0;
}
