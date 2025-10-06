#include <stdio.h>

// For using dynamic memory allocation (malloc and free)
#include <stdlib.h>

// For string operations
#include <string.h>

#define SIZE 50

/*   Write a C program to pass the structure variable employee to a function
 *   display() which is used to display the details of an employee. The employee
 *   details include ID, name, phone number, and address of the employee. Address
 *   detail should also be a structure including house number, city, and pincode.
 */


struct address {
  int houseno;
  char city[SIZE];
  long pin;
};


struct employee {
  int id;
  char name[SIZE];
  long phno;
  struct address addr;
};


typedef struct employee Employee;

void print_emp(const Employee e){
  printf("Employee name: %s\n", e.name);
  printf("Phone number : %ld\n", e.phno);
  printf("Employee ID  : %d\n", e.id);
  
  printf("House no     : %d\n", e.addr.houseno);
  printf("City         : %s\n", e.addr.city);
  printf("PIN code     : %ld\n", e.addr.pin);
}

int main(){

  // Creates an employee dynamically (runtime)
  // Could have also done it statically (compile time)

  Employee * emp = malloc(sizeof(Employee));

  (*emp).id = 1000;
  // Equivalent way
  // (*emp).name is same as emp->name
  strcpy(emp->name, "Sunil Kumar P B");
  emp->phno = 1729;

  emp->addr.houseno = 1;
  strcpy(emp->addr.city, "Palakkad");
  emp->addr.pin = 678623;
  print_emp(*emp);

  free(emp);
  emp = NULL;

  
  return 0;
}
