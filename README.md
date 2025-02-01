# CPTS223

To compile: g++ -std=c++11 -o PA1 *.cpp 
To run: ./PA1

Linked List Implementation
    - Advantage: When the user wants to add a command, a linked list is beneficial as it is a time complexity of 0(1) when adding to the front. Also, when adding       commands there isn't a fear of running out of space like there would be with a vecotor array. 
    - Disadvantage: When the user wants to remove an item from the linked list, we must traverse through which at the worst case scenario is O(n). A linked list implementation is not the most efficient data structure for this feature.

Array Implementation
    - Advantage: When searching for a previous game, an array allows quick indexing to find the player. It is O(1) in an array. It is also beneficial to use an array because it is a simple storing method for simple data, we don't need to worry about pointers like with a linked list.
    - Disadvantage: When arrays are implemented they are made with a fixed size. If there are more user profiles than anticipated, a new array would have to be created to hold all profiles. This is inefficient.
