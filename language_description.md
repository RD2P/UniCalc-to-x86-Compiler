# UniCalc: A Minimalist Single-Register Compiled Programming Language

Exploring minimalist programming paradigms.

## Description

UniCalc is a simple, assembly-like programming language designed for educational purposes and basic computational tasks. It operates on a single register and allows basic integer operations and console output.

## Requirements

- x86 architecture.

## Features:

- Compiles to x86 assembly
- Single Register: All operations are performed on one register, initialized as zero.
- Simple Syntax: Each line contains one operation or a comment.
- Basic Arithmetic: Supports addition, subtraction, multiplication, division, and modulo.
- Console Output: Display the register's value.
 Comments: Supports comments for code documentation.


## Language Syntax:

Keywords and Operations:

- `x SUM`: Add x to the register
- `x DIFF`: Subtract x from the register
- `x PROD`: Multiply the register by x
- `x QUOT`: Divide the register by x (integer division)
- `x REM`: Calculate the remainder of register divided by x
- `CLEAR`: Set the register to zero
- `BROADCAST` : Print the current value of the register to the console
- `# Comment` : Denote a comment (ignored by the compiler)

## Example program:

```text
# Calculate (5 * 3) - 2 and display the result

5 SUM
3 PROD
2 DIFF
BROADCAST

# 13
```
## Compilation

UniCalc is compiled to x86 assembly using the unicalc compiler. Call the compiler and provide the unicalc code as an argument.

Optionally provide an output file name with `-o outputfile`

```sh
unicompile mycode.unic -o mycode 
```

## Run the code
`./mycode`



