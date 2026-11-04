#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    string tasks[3];
    int counter = 0;

    while (true) {

        cout << "-----------------------" << endl;
        cout << "Add a new task (1)" << endl;
        cout << "Display your tasks (2)" << endl;
        cout << "Remove a task (3)" << endl;
        cout << "-----------------------" << endl << endl;
        
        int choice;
        cout << "Your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                if (counter == 3) {
                    cout << "Too many tasks! Your limit of 100 tasks have been reached" << endl;
                    continue;
                }
                cout << "Type task: ";
                cin >> tasks[counter];
                counter++;
                break;
                
            case 2:
                cout << "------------" << endl;
                cout << "Your tasks:" << endl;
                for (int i = 0; i < counter; i++)
                {
                    i + 1;
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
                cout << "------------" << endl;
                break;
            
            case 3: {
                if (counter < 1) {
                    cout << "You don't have tasks to remove." << endl << endl;
                    continue;
                }

                int taskNumber;
                cout << "Which task would you like to remove?: ";
                cin >> taskNumber;
                cout << endl;
                
                for (int i = taskNumber - 1; i < counter - 1; i++) {
                    tasks[i] = tasks[i + 1];
                }
                
                tasks[counter - 1] = "";
                counter--;

                cout << "Task removed successfully" << endl;
                //czy task number jest poprawny?
                break;
            }
            default:
                break;
                //opcja cofnięcia z tego menu

        }




        cout << endl;
    }

    return 0;
}
