#include "functions.h"

int main()
{
    Wrapper game;
    game.runApp();
    
    return 0;
}
/*Linked List Implementation: Use a singly linked list with a class template for ‘Node’ and ‘List’ (This should
be your very own implementation)
2. Avoid using C++ containers, available out of the box, like vector or list. The objective of the assignment is
to test whether you can implement a linked list by yourself using templates.
3. Store player profiles in an array.
a. Make sure that you specify the advantages and disadvantages of Array vs LinkedList in the readme
file.
Development Instructions
1. Files: Include at least one header file and two source files, one named main.
2. Building and Running: Compile using g++ and run using ./PA1. Add these commands to a readme file.
3. GitHub/Git: Not used for this assignment due to operational concerns. Submit all files directly via Canvas.


3 pts (1.5 pts/advantage and disadvantage) for listing 1 advantage and 1 disadvantage of using a linked
list for the data structure involved with storing the commands and descriptions; you must relate your ideas
to the way the list is used in THIS assignment. This should be in the README file.
• 3 pts (1.5 pts/advantage and disadvantage) for listing 1 advantage and 1 disadvantage of using an array
for the data structure involved with storing the user profiles; you must relate your ideas to the way the list
is used in THIS assignment. This should be in the README file.
• 25 pts for developing a correct class List, template with 1 parameter
o 6 pts for correct insertAtFront()– needed when loading from commands.csv
• 7 pts for correct removeNode()– needed when removing commands from the list
• 8 pts for other functions needed to operate on the list
• 2 pts for correct data members
• 2 pts for correct constructors/destructors
• 7 pts for correct implementation of class Node template with 1 parameter
• 5 pts for correct implementation of concrete class Data
• 3 pts for satisfying the Main Menu Requirement
• 18 pts for satisfying the Play Game Requirement
o 2 pts for correctly prompting user for the number of questions.
o 7 pts for correctly generating a random command and 3 random descriptions
o 3 pts for verifying answer
o 2 pts for updating player points
o 4 pts for generating correct number of questions
o 5 pts for satisfying the Load Previous Game Requirement
o 5 pts for satisfying the Add Command Requirement
o 5 pts for satisfying Remove Command Requirement
o 5 pts for satisfying Display All Commands Requirement
o 10 pts for satisfying the Exit Requirement
o 4 pts for correctly writing to commands.csv
o 3 pts for correctly writing to profiles.csv
o 2 pts for deallocating linked list memory
o 1 pt for closing the files
o 3 pts for the appropriate class and top-down design
o 3 pts for adherence to proper programming style established for the class and
comments
Notes
• Explore Linux commands at GeeksforGeeks.
• Focus on base commands without options (e.g., ls not ls -l).
• Start with the following commands: pwd, ls, cd, mkdir, rmdir, rm, cp, mv, ssh,
scp, man, g++, gcc, make, ps, kill, top, who, chmod, cat, alias, chown, df,
grep, echo, find, clear, diff, env, free.
Tips
Test thoroughly and check edge cases. Use meaningful comments and adhere to class coding*/