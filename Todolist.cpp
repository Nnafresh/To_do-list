
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void showtasks(string tasks[], int counter)
{
    cout << "Tasks to do" << '\n';
    cout << "---------------------------------" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "Task " << i + 1 << " : " << tasks[i] << endl;
    }
    cout << "-----------------------------------" << endl;

}


int main()
{
    int counter = 0;
    string tasks[10] = {};
    int num;

        int choice = 0;

        while (choice != 4) {
            cout << "***** To do list *****\n";
            cout << "1. Add Task\n";
            cout << "2. Remove Task\n";
            cout << "3. View Task\n";
            cout << "4. Exit\n";
            cout << "Select option: ";
            cin >> choice;

            switch (choice) {
            case 1:
            {
                if (counter > 9)
                    cout << "Task List is full \n";
                else
                    cout << "Enter a new Task : \n";
                cin.ignore();
                getline(cin, tasks[counter]);
                counter++;

                break;
            }
            case 2:
            {
                system("cls");
                int delete_tasks = 0;
                cout << "Enter task to delete : ";
                cin >> delete_tasks;

                if (delete_tasks < 0 || delete_tasks > 9)
                    cout << "You entered Invalid Task No." << endl;

                for (int i = delete_tasks; i < counter; i++)
                {
                    tasks[i] = tasks[i + 1];
                }
                    counter = counter - 1;
                break;
            }
            case 3:
                system("cls");
                showtasks(tasks, counter);  
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
            }
        }

        return 0;
 }

    
