# 0x1C. C - Makefiles

## Description
What you should learn from this project:

* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

---

### [0. make -f 0-Makefile](./0-Makefile)
* Create your first Makefile.


### [1. make -f 1-Makefile](./1-Makefile)
* Requirements:
* name of the executable: holberton
    * rules: all
        * The all rule builds your executable
    * variables: CC, SRC
        * CC: the compiler to be used
        * SRC: the .c files


### [2. make -f 2-Makefile](./2-Makefile)
* Create your first useful Makefile.


### [3. make -f 3-Makefile](./3-Makefile)
* Requirements:
* name of the executable: holberton
    * rules: all, clean, oclean, fclean, re
        * all: builds your executable
        * clean: deletes all Emacs and Vim temporary files along with the executable
        * oclean: deletes the object files
        * fclean: deletes the Emacs temporary files, the executable, and the object files
        * re: forces recompilation of all source files
    *variables: CC, SRC, OBJ, NAME, RM
        * CC: the compiler to be used
	* SRC: the .c files
	* OBJ: the .o files
	* NAME: the name of the executable
	* RM: the program to delete files
    * The all rule should recompile only the updated source files
    * The clean, oclean, fclean, re rules should never fail
    * You are not allowed to have a list of all the .o files

### [4. A complete Makefile](./4-Makefile)
* Requirements:
* name of the executable: holberton
    * rules: all, clean, fclean, oclean, re
        * all: builds your executable
	* clean: deletes all Emacs and Vim temporary files along with the executable
	* oclean: deletes the object files
	* fclean: deletes the Emacs temporary files, the executable, and the object files
	* re: forces recompilation of all source files
    * variables: CC, SRC, OBJ, NAME, RM, CFLAGS
        * CC: the compiler to be used
	* SRC: the .c files
	* OBJ: the .o files
	* NAME: the name of the executable
	* RM: the program to delete files
	* CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
    * The all rule should recompile only the updated source files
    * The clean, oclean, fclean, re rules should never fail



### [5. Island Perimeter](./5-island_perimeter.py)
* Technical interview preparation:
* Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
    * grid is a list of list of integers:
        * 0 represents a water zone
	* 1 represents a land zone
	* One cell is a square with side length 1
	* Grid cells are connected horizontally/vertically (not diagonally).
	* Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water, and there is one island (or nothing).
    * The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
---

## Author
* **Christine Pang** - [christinepang1](https://github.com/christinepang1)