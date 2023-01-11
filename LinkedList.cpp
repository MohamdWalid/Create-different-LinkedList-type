#include <iostream>
#include <string>
#include"Linked_list.h"

using namespace std;


int main()
{
	string menuFlow = "Y";

	cout << "Welcome to Linked_List program \n\n";


	while (menuFlow == "Y")				// Main menu of the program
	{
		string opertation;

		system("cls");

		cout << "1- create a integer Linked_List\n";
		cout << "2- create a float Linked_List\n";
		cout << "3- create a double Linked_List\n";
		cout << "4- create a character Linked_List\n";
		cout << "5- create a string Linked_List\n";
		cout << "6- Exit\n";

		cin >> opertation;

		if (opertation == "1")	// Creating a integer linked list accourding to user choice
		{
			string listOperation;
			string subFlow = "Y";
			Linked_list	<int> iLinked;

			system("cls");

			cout << "Integer linked_List has been created \n\n";


			while(subFlow == "Y")
			{ 
										// Menu of linkedList operations
				cout << "\n1- push_back()\n";
				cout << "2- push_front()\n";
				cout << "3- erase()\n";
				cout << "4- display()\n";
				cout << "5- isEmpty()\n";
				cout << "6- size()\n";
				cout << "7- Go to main menu\n";

				cin >> listOperation;

				if (listOperation == "1")
				{
					int iNumber;		// push_back the integer number into linkedlist

					cout << "Enter the integer number : ";
					cin >> iNumber;

					while (cin.fail())		//Checking from the input validation
					{
						cin.clear();
						cin.ignore(10000, '\n');

						cout << "Please enter a right input :";
						cin >> iNumber;

					}

					iLinked.push_back(iNumber);
					cout << "The number has been push_back() \n";
				}


				else if (listOperation == "2")
				{
					int iNumber;		// push_front the integer number into linkedlist

					cout << "Enter the integer number : ";
					cin >> iNumber;

					while (cin.fail())		//Checking from the input validation
					{
						cin.clear();
						cin.ignore(10000, '\n');

						cout << "Please enter a right input :";
						cin >> iNumber;

					}

					iLinked.push_front(iNumber);
					cout << "The number has been push_front() \n";
				}


				else if (listOperation == "3")
				{
					int position;			// Taking the node position from user to delete it

					cout << "Enter the position of the element that you want to delete : ";
					cin >> position;

					while (cin.fail())		//Checking from the input validation
					{
						cin.clear();
						cin.ignore(10000, '\n');

						cout << "Please enter a right input :";
						cin >> position;

					}

					iLinked.erase(position);

				}


				else if (listOperation == "4")
				{
					cout << "==============================================\n\n";
					iLinked.display();
					cout << "\n\n==============================================\n";
				}


				else if (listOperation == "5")
				{
					if (iLinked.isEmpty() == 1)
					{
						cout << "The list is empty\n";
					}

					else
					{
						cout << "The list isn't empty\n";
					}
				}


				else if (listOperation == "6")
				{


					cout << "There is " << iLinked.listSize() << " elements in the list \n";
				}

				else if (listOperation == "7")
				{
					subFlow = "N";
				}

				else
				{
					system("cls");
				}
			}
		}

		
	}

	return 0;
}






