#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;}Node;
int main(){
system("cls");
    while(1){
        printf("---------Singly Linked List---------\n");
        printf("1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete from beginning\n5. Delete from end\n6. Delete from position\n7. Searching in List\n8. Sort Elements\n9. Display\n10. Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            break;
            case 2:
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
            break;
            case 8:
            break;
            case 9:
            break;
            case 10:
            exit(0);
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
