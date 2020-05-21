#include<stdio.h>

typedef struct {
  int empid;
  double esalary;
  int eage;
  char *ename;  //shallow copy vs deep copy
}employee;

employee* clone(employee* psrc);
employee* create(int id, char* name, double salary, int age);
void release(employee *ptr);

int main(int argc, char* argv[]) {
  employee *p1;
  p1 = create(1001, "Richard", 5000, 20);
  display(p1);

  employee *p2 = clone(p1);
  display(p2);

  return 0;
}
employee* create(int id, char* name, double salary, int age) {
  int namelen = strlen(name);
  employee *ptr = malloc(sizeof(employee));
  ptr->empid=id;
  ptr->ename = malloc(namelen+1);
  strcpy(ptr->ename, name);   
  ptr->esalary=salary;
  ptr->eage=age;
}
employee* clone(employee* psrc) {
  int namelen = strlen(psrc->ename);
  employee *pnew = malloc(sizeof(employee));
  pnew -> ename = malloc(namelen+1);
  pnew -> empid = psrc -> empid;
  strcpy(pnew -> ename, psrc -> ename);
  pnew -> esalary = psrc -> esalary;
  pnew -> eage = psrc -> eage;
  //memcpy(pnew, psrc, sizeof(employee));     //??
  return pnew;
}
void display(const employee* ptr) {
}
void release(employee *ptr) {
  free(ptr);
}
