## Compile and run

```
cd D:\Tayyab\uni\sem2\cs201
g++ .\src\lectures\lecture9.cpp -o .\bin\lecture9.exe
.\bin\lecture9.exe
```



lecture 24:
static memory = using stack fixed memory int i[20];
dynamic memory = using heap no memory limit;

malloc() = a block of dynamic memory
calloc() = multiple blocks of dynamic memory
relloc() = resize the memory created by malloc or calloc

memory leak = when memory allocated by `new` keyword but forgot to deallocate using delete ()/[] then memory leak occurs.

dangling pointer = valid pointer point to invalid memory


lecture 33-39: pending.

lecture 40: class in class;
