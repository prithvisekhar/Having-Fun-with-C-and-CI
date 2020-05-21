/** Dynamic Memory - Simple Structure*/

struct student {
  int rollno;
  char name[20];
  int total;
  int age;
};
  
int main() {
  struct student *ps;
  ps=malloc(sizeof(struct student)); //calloc(1, sizeof(struct student));

  ps->rollno=1001;
  strcpy(ps->name,"John");
  ps->total=80;
  ps->age=20;

  printf("Rollno=%d,Name=%s,Total=%lf,Age=%d\n",
        ps->rollno, ps->name, ps->total, ps->age);
  free(ps);
  ps=NULL;
  return 0;
}  
