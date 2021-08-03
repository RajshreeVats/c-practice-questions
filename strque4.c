#include <stdio.h>
struct books {
    char title[50];
    char author[50];
    int price;
} s[100];

int main() {
    int n;
    struct books s[100];

    printf("Enter total number of books:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        printf("\n Enter information of books %d:\n",i+1);
        printf("Enter title: ");
        scanf("%s", &s[i].title);

        printf("Enter author: ");
        scanf("%s", &s[i].author);

        printf("Enter price: ");
        scanf("%d", &s[i].price);
    }


    printf("Displaying Information:\n");
    for(int i=0;i<n;i++) {
        printf("\n %d no. book info\n",i+1);
        printf("Book title: ");
        printf("%s\n", s[i].title);

        printf("Book author: ");
        printf("%s\n", s[i].author);

        printf("Price: %d\n", s[i].price);
    }
    

    return 0;
}