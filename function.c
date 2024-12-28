#include<stdio.h>
#include "function.h"
#include"datatypes.h"

void printMenu(){
	printf("***Student Management System Using C***\n");
	printf("\tMenu\n");
	printf("[1] Add A New user.\n");
	printf("[2] Show All users.\n");
	printf("[3] Show detail an user.\n");
	printf("[4] Lock ( Unlock) an user.\n");
	printf("[5] User Guideline.\n");
	printf("[6] About Us.\n");
	printf("[7] Exit the program.\n");
};
void showAllUsers(struct User users[],int count){
	 printf("+---------------+----------------+-----------------+------------+-------+\n");
    printf("| ID            | Name           | Email           | Phone      | Status|\n");
    printf("+---------------+----------------+-----------------+------------+-------+\n");
    int i;
	for ( i = 0; i < count; i++) {
        printf("| %-13s | %-14s | %-15s | %-10s | %-5s |\n", 
         users[i].id, users[i].name, users[i].email, users[i].phone, users[i].status);
}printf("+---------------+----------------+-----------------+------------+-------+\n");		
};
int addUser(struct User users[], int count, int maxUsers) {
    if (count >= maxUsers) {
        printf("The user list is full. Cannot add more users.\n");
        return count;
    }
    struct User newUsers;
    // Nhap id
    printf("Enter ID: ");
    fgets(newUsers.id,sizeof(newUsers.id),stdin);
    newUsers.id[strcspn(newUsers.id,"\n")]='\0';
    // Nhap ten
	printf("Enter Name: ");
	fgets(newUsers.name,sizeof(newUsers.name),stdin);
	newUsers.name[strcspn(newUsers.name,"\n")] ='\0';
	//Nhap email
	printf("Enter Email: ");
	fgets(newUsers.email,sizeof(newUsers.email),stdin);
	newUsers.email[strcspn(newUsers.email,"\n")] ='\0';
	//Nhap so dien thoai
	printf("Enter Phone: ");
	fgets(newUsers.phone,sizeof(newUsers.phone),stdin);
	newUsers.phone[strcspn(newUsers.phone,"\n")] ='\0';
	// Nhap trang thai 
	printf("Enter Status: ");
	fgets(newUsers.status,sizeof(newUsers.status),stdin);
	newUsers.status[strcspn(newUsers.status,"\n")] ='\0';
	
	users[count] = newUsers;
    printf("User added successfully!\n");
    return count + 1;
};
	
    

   
