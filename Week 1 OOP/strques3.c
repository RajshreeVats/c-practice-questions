#include<stdio.h>
struct person{
   int id;
   char name[50];
   int age;
   float salary;
   int gs;
};


int main(){
   int n;
   float bs, hra, da;
   float gross[n];
   struct person *personPtr, person[n];
   personPtr = &person[n];
   printf("Enter number of employees : ");
   scanf("%d", &n);
   for (int i = 0; i < n;i++) {
   
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
    gross[i]  = bs + hra + da; 

   }

   for (int i = 0; i < n; i++) {
      printf("Displaying:\n");
      printf("Age: %s\n", personPtr->name);
      printf("Age: %d\n", personPtr->id);
      printf("Age: %d\n", personPtr->age);
      printf("salary: %f\n", personPtr->salary);
      printf("Gross Salary = %f\n", personPtr -> gs); 
   }
   return 0;
} 
