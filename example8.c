#include<stdio.h>

typedef struct {
  int empid;
  double esalary;
  int eage;
  char ename[];  //struct hack or flexible array member(FAM)
}employee;

int main(int argc, char* argv[]) {
  employee *p1;
  p1 = create(1001, "Richard", 5000, 20);
  display(p1);

  employee *p2 = clone(p1);
  p2->display();

  release(p2);
  return 0;
}
employee* create(int id, char* name, double sal, int age) {
  int namelen = strlen(name);
  employee *ptr = malloc(sizeof(employee) + namelen + 1);
  ptr->empid=id;
  strcpy(ptr->ename, name);   
  ptr->esalary=salary;
  ptr->eage=age;
}
c
void release(employee *ptr) {
  free(ptr);    
}
