#include "../header/driverTask.hpp"
#include "../header/task.hpp"

Task* findTaskbyName(const std::string& name) {
    Task task; 
    const vector<Task>& taskList = task.getTaskList();

    for (const Task& task : taskList) {
        if (task.getName() == name) {
            return const_cast<Task*>(&task);
        }
    }
    return nullptr;
}

int main() {

    DriverTask driver;
    int user_choice;

    cout << " Do you have lots of things to do? Do you not know how to manage your time? All those worries will go away now!" << endl; 
    cout << "Welcome to RANGBOT, your own personal task management system!" << endl;

    while(true) {

        cout << "What would you like to do today?" << endl;
        cout << "Create a task, enter 1" << endl;
        cout << "Edit a task, enter 2" << endl;
        cout << "Delete a task, enter 3" << endl;
        cout << "Display all tasks, enter 4" << endl;
        cout << "To save current tasks, enter 5" << endl;
        cout << "To quit, enter 0" << endl;

        cin >> user_choice;
        cin.ignore();

        if (user_choice == 0) {
            cout << "Have a good day" << endl;
            //save file
            break;
        }
        else if (user_choice == 1) {
            cout << "You have chosen to make a new task" << endl;
        }
        else if(user_choice == 2) {
            while(true) {

                int edit_choice;
                string name;
                cout << "Enter the name of the task you wish to edit" << endl;
                getline(cin, name);

                Task* task = findTaskbyName(name);

                if (task != nullptr) {
                    cout << "Choose one of the following to edit:" << endl;
                    cout << "Name: press 1" << endl;
                    cout << "Priority: press 2" << endl;
                    cout << "Deadline: press 3" << endl;
                    cout << "Description: press 4" << endl;
                    cout << "Duration: press 5" << endl;
                    cout << "Label: press 6" << endl;
                    cout << "Mark as complete: press 7" << endl;
                    cin >> edit_choice;
                    if (edit_choice == 1 || edit_choice == 3 || edit_choice == 4 || edit_choice == 6 || edit_choice == 7) {
                        string user_input_str;
                        getline(cin, user_input_str);
                        driver.editTaskDriver(*task, edit_choice, user_input_str);
                    }
                    else if(edit_choice == 2){
                        int user_input_int;
                        cin >> user_input_int;
                        driver.editTaskDriver(*task, edit_choice, user_input_int);
                    }
                    else if(edit_choice == 5) {
                        double user_input_double;
                        cin >> user_input_double;
                        driver.editTaskDriver(*task, edit_choice, user_input_double);
                    }
                    else {
                        cout << "Invalid Input" << endl;
                    }
                }
                else {
                    cout << "Task not Found" << endl;
                }
                cout << "To exit editing, enter 0" << endl;
                int exit_check;
                cin >> exit_check;
                if (exit_check == 0) {
                    break;
                }
            }
        }
        else if (user_choice == 3) {
            cout << "Do you wish to delete a specific task or delete all marked completed? " << endl;
            cout << "If a specific task, enter 1" << endl;
            cout << "If all completed, enter 2" << endl;
            int deletechoice;
            cin >> deletechoice;
            if (deletechoice == 1) {
                cout << "Please enter the task name: " << endl;
                string delchoice;
                cin >> delchoice;
                driver.deleteTaskDriver(delchoice, taskList);
            }
            else if (deletechoice == 2) {
                driver.deleteTaskDriver(taskList);
            }
            else {
                cout << "Invalid choice." << endl;
            }
        }
    }
}



