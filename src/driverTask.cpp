#include "../header/driverTask.hpp"

void DriverTask::editTaskDriver(Task &task, int edit_choice, const string& user_input) {
    editTask editor;
    switch (edit_choice) {
        case 1:
            editor.editName(task, user_input);
            break;
        case 3:
            editor.editDeadline(task, user_input);
            break;
        case 4:
            editor.editDescription(task, user_input);
            break;
        case 6:
            editor.editLabel(task, user_input);
            break;
        case 7:
            editor.markAsComplete(task);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void DriverTask::editTaskDriver(Task &task, int edit_choice, int user_input) {
    editTask editor;
    switch (edit_choice) {
        case 2:
            editor.editPriority(task, user_input);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void DriverTask::editTaskDriver(Task &task, int edit_choice, double user_input) {
    editTask editor;
    switch (edit_choice) {
        case 5:
            editor.editDuration(task, user_input);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void DriverTask::deleteTaskDriver(const string &name, vector<Task> &taskList) {
    DeleteTask deleter;
    deleter.DeleteByName(taskList, name);
}

void DriverTask::deleteTaskDriver(vector<Task> &taskList) {
    DeleteTask deleter;
    deleter.DeleteWhenDone(taskList);
}