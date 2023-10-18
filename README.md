## 0x1B. C - Sorting algorithms & Big O
#### `C Algorithm Data structure`
 * By: Alexandre Gautier
 * Weight: 2
 Project to be done in teams of 2 people (your team: Tekoh Palma ACHU, Samuel Ejalonibu)
 Project will start Oct 18, 2023 4:00 AM, must end by Oct 25, 2023 4:00 AM
 Checker will be released at Oct 19, 2023 10:00 PM
 An auto review will be launched at the deadline

![IMG](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png)

### Background Context
This project is meant to be done by groups of two students. Each group of two should pair program for at least the mandatory part.

### Resources
##### Read or watch:

Sorting algorithm
Big O notation
Sorting algorithms animations
15 sorting algorithms in 6 minutes (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
CS50 Algorithms explanation in detail by David Malan
All about sorting algorithms
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

### Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
### Requirements
#### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.
- GitHub
- There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

### More Info
#### Data Structure and Functions
For this project you are given the following print_array, and print_list functions:
```#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

- Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions print_array and print_list in your sort.h header file
- Please use the following data structure for doubly linked list:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

Please, note this format is used for Quiz and Task questions.

- `O(1)`
- `O(n)`
- `O(n!)`
- `n square -> O(n^2)`
- `log(n) -> O(log(n))`
- `n * log(n) -> O(nlog(n))`
- `n + k -> O(n+k)`
- …
Please use the “short” notation (don’t use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. If an answer is required within a file, all your answers files must have a newline at the end.

## Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [`Random.org`](https://intranet.alxswe.com/rltoken/YR-VWQbICB59wZs1eAaI3w)


## Useful Resources 🗒️📖
Read or watch:
* [Big-O Algorithm Complexity Cheat](https://www.bigocheatsheet.com/)
* [Big O Notation - Ruby Reilly](https://medium.com/@rubyclaroreilly/big-o-notation-f2c0d0e60888)
* [Big O Notation: A primer for beginning devs](https://www.educative.io/blog/a-big-o-primer-for-beginning-devs?aid=5082902844932096&utm_source=google&utm_medium=cpc&utm_campaign=blog-dynamic&gclid=EAIaIQobChMIlb2ol-H36QIVTwiICR38HQ-LEAAYASAAEgJjGPD_BwE%3E)
* [Complete Beginner's Guide to Big O Notation](https://www.youtube.com/watch?v=kS_gr2_-ws8)
* [Data Structures - Asymptotic Analysis](https://www.tutorialspoint.com/data_structures_algorithms/asymptotic_analysis.htm)
* [RANDOM.ORG - Integer Set Generator](https://www.random.org/integer-sets/)
* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm#Classification)
* [algorithm - What is a plain English explanation of "Big O" notation?](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [What is the time complexity of indexing, inserting and removing from common data structures?](https://stackoverflow.com/questions/122799/what-is-the-time-complexity-of-indexing-inserting-and-removing-from-common-data)
* [Sorting Algorithms Animations](https://www.toptal.com/developers/sorting-algorithms)
* [Sorting Algorithms BigPicture](https://www.youtube.com/watch?v=RLuBLU_NgaA)

* [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation)

* [Big-O is easy to calculate, if you know how](https://justin.abrah.ms/computer-science/how-to-calculate-big-o.html)
* [8 time complexities that every programmer should know](https://adrianmejia.com/most-popular-algorithms-time-complexity-every-programmer-should-know-free-online-tutorial-course/#Binary-search)
