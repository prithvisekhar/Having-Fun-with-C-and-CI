# Outline

## Building a simple program, phase wise
```
gcc hello.c -E          # stop with preprocess, actual tool is cpp
gcc hello.c -c          # compile only (no link), hello.o generated
gcc hello.o -o h.out    # link with std libs, startup code
```

## Sections of a C/C++ Process
Use layoutdemo.c for this, dump symbol table using these steps

```
gcc layoutdemo.c -c -o demo.o
nm demo.o
objdump -t demo.o
```
> observe symbol states like D,C/B,T,R, d,b,t,r
> What is the meaning of these symbol states in nm/objdump output?

## More GNU Tools, gcc/g++ options
```
gcc hello.c   -S            # generate assebly code
gcc hello.s -c -o hello.o   # assemble the code
as hello.s -o hello.o       # assemble the code
gcc hello.o -o h.out        # link, generate executable

file hello.o                # check file type
file h.out                  # check file type
nm hello.o                  # symbol table
objdump -t hello.o          # symbol table
objdump -D hello.o	    # objdump --help
objdump -d hello.o          # disassemble the code
readelf -h hello.o          # header analysis, decode magic number
readelf -h h.out            # header analysis
size hello.o                # section wise footprint
size h.out                  # size --help
```
## Debugging
```
gdb- Breakpoint, stepping, print etc. 
gcc demo.c -c -g
gcc demo.o -o d.out -g
gdb ./d.out
```
* [onlineGDB](https://www.onlinegdb.com/)
In the IDE debug feature


## Code Vizualization - Ctutor 
* [Ctutor](http://www.pythontutor.com/c.html#code=%23include%3Cstdio.h%3E%0A%0A%23define%20PI%2022.0/7.0%0A%23define%20SQUARE%28x%29%20%28x%29%20*%20%28x%29%0A%0Aint%20main%28%29%20%7B%0A%20%20printf%28%22Hello%20World%5Cn%22%29%3B%20%20%20/*some%20comment%20*/%0A%20%20printf%28%22Thank%20You%5Cn%22%29%3B%0A%20%20double%20area,%20rad%3D7.0%3B%0A%20%20area%20%3D%20PI%20*%20SQUARE%28rad%29%3B%0A%20%20/*%20Some%20comment*/%0A%20%20printf%28%22area%3D%25f%20%5Cn%22,area%29%3B%0A%20%20return%200%3B%0A%7D&curInstr=7&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

