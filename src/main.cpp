#include "../header/driverTask.hpp"
#include "../header/task.hpp"

Task* findTaskbyName(const string &name, vector<Task> &taskList) {
    for (int i = 0; i < taskList.size(); i++) {
        if (taskList.at(i).getName() == name) {
            return &taskList.at(i);
        }
    }
    return nullptr;
}

int main() {

    vector <Task> taskList;
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
            string taskname;
            int taskpriority;
            string taskdeadline;
            string taskdescription;
            double taskduration;
            string tasklabel;
            cout << "You have chosen to make a new task" << endl << endl;
            cout << "Enter task name" << endl;
            getline(cin, taskname);
            cout << "Enter task priority level from most important to least important(1-5)" << endl;
            cin >> taskpriority;
            cin.ignore();
            cout << "Enter deadline for task to be completed (ex: mm/dd/yyyy)" << endl;
            getline(cin, taskdeadline);
            cout << "Enter description for what the task is" << endl;
            getline(cin, taskdescription);
            cout << "Enter the approximate time the task will take in minutes (ex: 85)" << endl;
            cin >> taskduration;
            cin.ignore();
            cout << "Give your task a label (ex: school, work, etc)" << endl;
            getline(cin, tasklabel);

            driver.createTaskDriver(taskname, taskpriority, taskdeadline, taskdescription, taskduration, tasklabel, taskList);

        }
        else if(user_choice == 2) {
            while(true) {

                int edit_choice;
                string name;
                cout << "Enter the name of the task you wish to edit" << endl;
                getline(cin, name);

                Task* task = findTaskbyName(name, taskList);

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
                    cin.ignore();
                    if (edit_choice == 1 || edit_choice == 3 || edit_choice == 4 || edit_choice == 6 || edit_choice == 7) {
                        cout << "Enter new value" << endl;
                        string user_input_str;
                        getline(cin, user_input_str);
                        driver.editTaskDriver(*task, edit_choice, user_input_str);
                    }
                    else if(edit_choice == 2){
                        cout << "Enter new value" << endl;
                        int user_input_int;
                        cin >> user_input_int;
                        driver.editTaskDriver(*task, edit_choice, user_input_int);
                    }
                    else if(edit_choice == 5) {
                        cout << "Enter new value" << endl;
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



