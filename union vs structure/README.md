# Structure vs Union 

## Description
A simple C program that demonstrates the difference between
structures and unions by comparing memory allocation and
data storage behavior.

## Concepts Used
- Structures
- Unions
- Memory allocation
- sizeof operator

## Key Differences
| Structure | Union |
|--------|-------|
| Allocates memory for all members | Shares memory among members |
| All values accessible at once | Only last value is valid |
| Larger memory size | Smaller memory size |

## How to Compile and Run
```bash
gcc struct_vs_union.c -o struct_vs_union
./struct_vs_union
##Sample output
Structure vs Union Demonstration

STRUCTURE VALUES:
Roll: 1
Marks: 85.5
Grade: A

UNION VALUES AFTER roll:
Roll: 1

UNION VALUES AFTER marks:
Marks: 85.5

UNION VALUES AFTER grade:
Grade: A

MEMORY SIZE:
Size of structure: 12 bytes
Size of union: 4 bytes
