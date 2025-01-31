#include "functions.h"

void Wrapper::displayMenu()
{
    cout << "1. Game Rules" << endl << "2. Play New Game" << endl << "3. Load Previous Game" <<
	endl << "4. Add Command" << endl << "5. Remove Command" << endl << "6. Display All Commands" << 
    endl << "7. Save and Exit" << endl << "Choose: ";
}

void Wrapper::displayRules()
{
    cout << "This is a text based trivia game that tests your knowledge of Linux commands." << endl << "You must match the command with its correct definition."
    << endl << "Points will be rewarded or deducted for correct and incorrect answers respectively." << endl << "You may save and exit at any time." << endl;
}

void Wrapper::runApp()
{
    int menuChoice = 0;
    do
    {
        displayMenu();
        while (!(cin >> menuChoice))  // Check if matches correct type
        {
            cout << "Invalid input, try again: ";
            cin.clear();  // Get out of error state
            cin.ignore(10000, '\n');  // Clear stream for new input
        }

        switch (menuChoice)
        {
        case 1:  // Displays game rules
            displayRules();
            std::this_thread::sleep_for(std::chrono::seconds(5));  // Sleep for 5 seconds
            system("clear");
            break;

        case 2:  // Play game - Prompt for name & # questions
            break;

        case 3:  // Load previous game - Load existing player profile by name & display stored points
            break;

        case 4:  // Add Command - add to linked list without duplicates
            /*IMPORTANT NOTE: You should store the commands in a Linked list container. Instead of using
    the out-of-box containers C++ provides you, you need to implement a LinkedList container on your
    own. Also, this container must be reusable for a different problem, so instead of hardcoding what
    goes into the list, you need to use templates*/
            break;

        case 5:  // Remove commands - propmt to remove command from list
            break;
        
        case 6:  // Display all commands - show command, description, points
            break;
        }
    } while (menuChoice != 7);  // Save commands and profiles, deallocate and exit
}