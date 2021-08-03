#include<stdio.h>
struct person{
   int id;
   char name[50];
   int age;
   float salary;
   int gs;
};


int main(){
   float bs, hra, da, gross;
   struct person *personPtr, person1;
   personPtr = &person1;
   printf("Enter name: ");
   scanf("%s", &personPtr->name);
   printf("Enter id: ");
   scanf("%d", &personPtr->id);
   printf("Enter age: ");
   scanf("%d", &personPtr->age);
   printf("Enter salary: ");
   scanf("%f", &personPtr->salary);
    printf("Enter basic salary\n");  
    scanf("%f", &bs);  
  
    hra = bs * (20/100.00);  
    da  = bs * (40/100.00);  
    //gross calculation
    gross  = bs + hra + da;  
  
 
   printf("Displaying:\n");
   printf("Age: %s\n", personPtr->name);
   printf("Age: %d\n", personPtr->id);
   printf("Age: %d\n", personPtr->age);
   printf("salary: %f\n", personPtr->salary);
   printf("Gross Salary = %f\n", personPtr -> gs); 
   return 0;
} 
