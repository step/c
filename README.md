# The C Programming Language

## What is C?

C is a statically typed, general-purpose programming language, typically used to program low level applications and libraries, operating systems, embedded systems and database systems among other things.

## Why are we learning it?

Learning C will help us understand fundamental concepts such as memory and processing far better than a high level language like Javascript will.

The primary aim of learning C here isn't to necessarily write production grade code, but to have a firm grasp of how code works at the lowest levels. So, we will not really focus on unit testing in C etc. Instead our focus will be primarily on memory management and data structures.

## How is it different from JavaScript?

| C                               | Javascript                   |
| ------------------------------- | ---------------------------- |
| Statically typed                | Dynamically Typed            |
| Minimal/no type inference       | Inferred types               |
| Runs directly on the OS         | Runs on an interpreter       |
| Developer managed memory        | Runtime managed memory       |
| No automatic garbage collection | Automatic garbage collection |

The biggest difference for us will be the fact that C is statically typed. What does this mean?

Consider

```javascript
let a = 2;
```

Here, Javascript infers that `a` has an integer or a numerical value, automatically allocates the required space and then performs the initialisation.

However in C:

```C
int a = 2;
```

Here we explicitly are requesting an interger's worth memory(typically 4 bytes on 64 bit systems). Though, this may just as well be written as:

```C
float a = 2;
double b = 2;
char c = 2;
```

In the above example, each of the variables declared have a very specific amount of space and each declaration implies that in the future those variables will be treated a specific way.

For instance, the following is incorrect and will generate a compile warning:

```C
int a = 2;
a = "abc";
```

Importantly, a will not be "abc" here but an unknown random value. Further, a compiler can be used to apply strict rules that prevent something like this from being compiled. Once a variable has been declared with a certain type, it remains of that type permanently.

Even functions have to be declared with a "signature" that specifies the type(s) we are passing in and returning.

```C
int add(int x, int y) {
  return x + y;
}
```

Nearly all of what we will learn C for is related to this difference in types and memory management. While this is not a comprehensive list of differences, it should provide you with a brief overview.

---

## Hello World

The code itself is quite straightforward

```C
#include <stdio.h>

int main(void)
{
  printf("Hello World\n");
  return 0;
}
```

At this point, consider going to [compiling and execution](#compiling-and-execution). The rest of this section describes the details of the above program which are unnecessary to get started with.

However, beneath the simplicity of this program, a lot is happening.

`main` is a function that takes no arguments and returns 0. In C, the `main` function is special and is always the entry point of execution. The return value of the main function is the status/exit code of the program.

`printf` is a function. But in order to use it, you have to `include` the library in which it is declared. The library happens to be `stdio.h`. While `include` seems similar to `require` in Javascript, it is actually quite different. Unlike `require` which is a function, `#include` is actually an instruction to the compiler and the compiler simply replaces the line `#include <stdio.h>` with the contents of `stdio.h`.

## Compiling and execution

To simply compile a file named `hello_world.c`

```bash
gcc hello_world.c
```

This will generate a file called `a.out`. To execute what you've just compiled, type in `./a.out`

To compile the file into a differently named executable:

```bash
gcc -o hello_world hello_world.c
```
