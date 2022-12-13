Steps

1. run the command gcc -fPIC -c *.c -  This command essentially generates one object file .o for each source file .c . The -fPIC flag ensures that the code is position-independent. This means it wouldn’t matter where the computer loads the code into memory. Some operating systems and processors need to build libraries from position-independent code so that they can decide at runtime where they want to load it into memory. The -c options just ensures that each .o file isn’t linked yet.

2. run the command gcc *.o -shared -o libdynamic.so - The wildcard * tells the compiler to compile all the .o files into a dynamic library which is specified by the -shared flag. The naming convention for dynamic libraries is such that each shared library name must start with lib and end with .so . Other than that though, let your imagination run free when considering names for your dynamic libraries.

3. run the command nm -D libdynamic.so
4. run the command gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
5. run the command ldd len
6. run the command export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
7. run the command ldd len
8. run the command ./len
