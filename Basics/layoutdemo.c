//int sum(int,int);
int d1 = 10;         // D, .data
int c;               // C,  common, .bss
static int d2 = 10;  // d,  .data
static int b1;       // b,  .bss
const int r1 = 10;   // R,  .rodata
static const int r2 = 10;   // r,  .rodata
static const int r3; // r,  .bss
void foo() {}        // T,  .text
static void bar() {} // t,  .text
int main() {         // T,  .text
  int x, y, z;
  //z = sum(x, y);     // U
  return 0;
}

