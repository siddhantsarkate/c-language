# Embedded_C_Programming
I will be documenting everything learning in Embedded C
------------------------------------------------------------
### Compilation Process
`main.c` is the source file written by you and given to the compiler for compilation
> - the first file that is generated while compilation is the 'preprocessed file' that we call as `main.i` 
> 	- `main.i` = collection of your code and contents of `<stdio.h>` 
> 	- here compiler finds for the signature/prototypes of the functions that are taken from the standard library files into source code.
> - `main.i` is converted into `main.s` which is collection of assembly instructions
> - `main.i` ---> `main.s`  = (Code generation stage) Higher level language code statements will be converted into processor architectural level mnemonics.
> - `main.s` ---> `main.o` (Assembler stage) Assembly level mnemonics are converted into opcodes (machine codes for instructions). (Object File)
