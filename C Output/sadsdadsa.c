#include <stdio.h>
#include <string.h>

#define MAX_MEDICINES 100


struct Medicine {
    char name[50];
    int quantity;
};

void displayMedicine(struct Medicine med) {
    printf("Medicine: %s\n", med.name);
    printf("Quantity: %d\n", med.quantity);
}


void updateMedicine(struct Medicine *med) {
    printf("Enter the new quantity: ");
    scanf("%d", &med->quantity);
}


void deleteMedicine(struct Medicine *med) {
    strcpy(med->name, "");
    med->quantity = 0;
}

int main() {
    struct Medicine medicines[MAX_MEDICINES];
    int numMedicines = 0;
    int choice, i;
    char searchName[50];

    do {
        printf("\nMedicine Stock Management System\n");
        printf("1. Add Medicine\n");
        printf("2. Update Medicine\n");
        printf("3. Delete Medicine\n");
        printf("4. Display All Medicines\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numMedicines < MAX_MEDICINES) {
                    printf("Enter the name of the medicine: ");
                    scanf("%s", medicines[numMedicines].name);
                    printf("Enter the quantity of the medicine: ");
                    scanf("%d", &medicines[numMedicines].quantity);
                    numMedicines++;
                } else {
                    printf("Maximum number of medicines reached.\n");
                }
                break;
            case 2:
                printf("Enter the name of the medicine to update: ");
                scanf("%s", searchName);
                for (i = 0; i < numMedicines; i++) {
                    if (strcmp(medicines[i].name, searchName) == 0) {
                        updateMedicine(&medicines[i]);
                        break;
                    }
                }
                if (i == numMedicines) {
                    printf("Medicine not found.\n");
                }
                break;
            case 3:
                printf("Enter the name of the medicine to delete: ");
                scanf("%s", searchName);
                for (i = 0; i < numMedicines; i++) {
                    if (strcmp(medicines[i].name, searchName) == 0) {
                        deleteMedicine(&medicines[i]);
                        break;
                    }
                }
                if (i == numMedicines) {
                    printf("Medicine not found.\n");
                }
                break;
            case 4:
                printf("\nMedicine stock details:\n");
                for (i = 0; i < numMedicines; i++) {
                    if (medicines[i].quantity > 0) {
                        displayMedicine(medicines[i]);
                    }
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
