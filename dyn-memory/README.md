# Outline

## Discussion Points/Checklist
* Need for dynamic memory and flexibility
* Heap usage, API usage - malloc, calloc, realloc, free
* Dynamic Memory for 
  * 1D Arrays | 2D Arrays |  structure variables | array of structure variables
* Flexible Array Member(FAM) [FAM](https://en.wikipedia.org/wiki/Flexible_array_member)
* Memory leaks - examples 
* Valgrind use for memory leak detection
* Other Heap errors
  * Read/write after free
  * Read/write beyond heap block size
  * Mismatch between allocation & release
  * Invalid base address to free
  * Double free

## Install valgrind
* If valgrind is not installed, install thru package manager
  ```
  sudo apt install valgrind
  ```

## Simple Usage
  ```
  gcc example1.c -o ex1.out
  valgrind ./ex1.out

  gcc example3.c -o ex3.out -g
  valgrind ./ex3.out
  ```

## Memory Leaks & Heap Analysis
* Memory leak
* Read/write after free
* Read/write beyond heap block size
* Mismatch between malloc/new, free/delete
* Modified/Invalid base address to free
* Double free problem
* Direct vs Indirect memory leaks

 

