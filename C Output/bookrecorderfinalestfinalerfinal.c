#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct Books {
    char title[50];
    char author[50];
    int year, bookid;
    int borrowed;
} bks;

void displayBooks (bks b[], int bnum) {
	int i;
	char *status;
    
	if (bnum == 0) {
		printf("\nNo books in the library.\n");
		return;
	}
	
	printf("\nItems Added:\n");
    printf("+-----------+------------------------------+------------------------------+--------+----------+\n");
    printf("|%-10s |%-30s |%-30s |%-6s |%-10s |\n", "Book ID", "Title", "Author", "Year", "Status");
    printf("+-----------+------------------------------+------------------------------+--------+----------+\n");
		for (i = 0; i < bnum; i++) {
			if (b[i].borrowed) {
				status = "Borrowed";
			}
			else {
				status = "Available";
			}
		printf("|%-10d |%-30s |%-30s |%-6d |%-10s |\n", b[i].bookid, b[i].title, b[i].author, b[i].year, status);
    }
printf("+-----------+------------------------------+------------------------------+--------+----------+\n");
}

void borrowBooks (bks b[], int bnum) {
	int id, i;
	
	printf("\nEnter Book ID to borrow: ");
	scanf("%d", &id);
	
	for(i = 0; i < bnum; i++)
		if (b[i].bookid == id) {
			if (b[i].borrowed) {
				printf("Book is already borrowed.\n");
			}
			else {
				b[i].borrowed = 1;
				printf("You have borrowed the book: %s\n" ,b[i].title);
			}
			return;
		}
	printf("Book not found.");
}

void returnBooks (bks b[], int bnum) {
	int id, i;
	
	printf("\nEnter Book ID to return: ");
	scanf("%d", &id);
	
	for(i = 0; i < bnum; i++) {
		if (b[i].bookid == id) {
			if (!b[i].borrowed) {
				printf("Book is not borrowed.\n");
			}
			else {
				b[i].borrowed = 1;
				printf("You have returned the book: %s\n" ,b[i].title);
			}
			return;
		}
	}
	printf("Book not found.");
}

void editBookDetails (bks b[], int bnum) {
	int id, i;
	
	printf("\nEnter Book ID to edit: ");
	scanf("%d", &id);
	
		for (i = 0; i < bnum; i++) {
			if (b[i].bookid == id) {
				
				printf("\n	Enter new title: ");
				scanf(" %[^\n]", b[i].title);
				
				printf("	Enter new author: ");
				scanf(" %[^\n]", b[i].author);
				
				printf("	Enter new year published: ");
				scanf("%d", &b[i].year);
				
				return;
			}
		}
		printf("Book ID not found.\n");
}

void removeBook (bks b[], int *bnum) {
	int id, i, x;
	
	printf("\n	Enter Book ID to remove: ");
	scanf("%d", &id);
	
		for (i = 0; i < *bnum; i++) {
        	if (b[i].bookid == id) {
            	printf("\nRemoving book with ID: %d\n", id);
            	for (x = i; x < *bnum - 1; x++) {
               		b[x] = b[x + 1];
            	}
            	(*bnum)--;
            	printf("Book removed successfully.\n");
            	return;
        	}
    	}
    printf("Book ID not found.\n");
}

int main() {
    bks b[MAX];
    int x, i, bnum = 0;
    int action;
    char cont;
    int dupli;

    printf("\n--------------------------------------");
    printf("\n| Welcome to Book Borrowing Recorder! |");
    printf("\n--------------------------------------");

    do {
        printf("\n  1. Add Book");
        printf("\n  2. Borrow Book");
        printf("\n  3. Return Book");
    	printf("\n  4. Edit Book Details");
		printf("\n  5. Delete Book");
        printf("\n  6. View All Books");
        printf("\n  7. Exit");
        printf("\n---------------------------");
        printf("\n  Enter Action: ");
        scanf("%d", &action);
        printf("---------------------------");

        switch(action) {
            case 1:
                printf("\n   Enter no of books to add: ");
                int bookToAdd;
                scanf("%d", &bookToAdd);

                	if (bnum + bookToAdd > MAX) {
                    	printf("Cannot add more items. Exceeds maximum capacity.\n");
                    	break;
                	}
			    
				for(x = 0; x < bookToAdd; x++) {
                	do {
                		dupli = 0;
                		printf("\n   Enter Book ID: ");
                		scanf("%d", &b[bnum + x].bookid);
                		
                		for (i = 0; i < bnum + x; i++) {
                			if (b[i].bookid == b[bnum + x].bookid) {
                			printf("\nBook ID already exists. Please enter a different ID.\n");
                			dupli = 1;
                			break;
						}
                	}	
				} while (dupli);
                	
                    printf("\n   Enter Book Title: ");
                    scanf(" %[^\n]", b[bnum + x].title);

                    printf("   Enter Book Author: ");
                    scanf(" %[^\n]", b[bnum + x].author);

                    printf("   Year Published: ");
                    scanf("%d", &b[bnum + x].year);
                    
                    b[bnum + x].borrowed = 0;
            	}
                bnum += bookToAdd;
                
                printf("\nBook Added Successfully!\n");
                break;
                
            case 2:	
            	borrowBooks(b, bnum);
            	break;
				
			case 3:	
				returnBooks(b, bnum);
				break;
				
			case 4:	
				editBookDetails(b, bnum);
				break;
				
            case 5:	
				removeBook(b, &bnum);
				break;
				
            case 6:
                displayBooks(b, bnum);
                break;
            case 7:
            	printf("\nExiting the program. Goodbye!");
            	return 0;
            default:
            	printf("Invalid Action. Please try again.");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');

    return 0;
}
