#include <stdio.h>
#include <stdlib.h>
#include "function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct User users[100]; 
    int userCount = 3;
    int maxUsers= 100;
    // Danh sach ban dau
    strcpy(users[0].id, "0333928763");
    strcpy(users[0].name, "Nguyen Van A");
    strcpy(users[0].email, "A@gmail.com");
    strcpy(users[0].phone, "0999888777");
    strcpy(users[0].status, "Lock");

    strcpy(users[1].id, "0333928764");
    strcpy(users[1].name, "Nguyen Van B");
    strcpy(users[1].email, "B@gmail.com");
    strcpy(users[1].phone, "0666888777");
    strcpy(users[1].status, "Open");

    strcpy(users[2].id, "0333928765");
    strcpy(users[2].name, "Nguyen Van C");
    strcpy(users[2].email, "C@gmail.com");
    strcpy(users[2].phone, "0555888777");
    strcpy(users[2].status, "Open");
	int choice;
	do{
	printMenu();
	printf("Enter the choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			userCount = addUser(users, userCount, maxUsers);
			break;
		case 2:
			showAllUsers(users, userCount);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			printf("Exit the program successfully");
			break;	
	}
	}while (choice !=7);
	return 0;
}
