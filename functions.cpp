#include "functions.h"

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
	case 1:  // Import course list - destroy and rewrite masterList - use block scope to declare file
		imported = importCourseList(myList);
		break;

	case 2:  // Load master list
		imported = loadMasterList(myList);  // fix imported
		break;

	case 3:  // Store master list
		if (imported)
		{
			storeMasterList(myList);
		}
		break;

	case 4:  // Mark absences
		if (imported)
		{
			isAbsent(myList);
		}
		break;

	case 5:  // Generate report
		if (imported)
		{
			generateReports(myList);
		}
		break;
	}
} while (menuChoice != 6);
}