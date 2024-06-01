#include "../header/driverTask.hpp"

void DriverTask::editTaskDriver(Task &task, int edit_choice, const string& user_input) {
    switch (edit_choice) {
        case 1:
            task.editName(user_input);
            break;
        case 3:
            task.editDeadline(user_input);
            break;
        case 4:
            task.editDescription(user_input);
            break;
        case 6:
            task.editLabel(user_input);
            break;
        case 7:
            task.markAsComplete();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void DriverTask::editTaskDriver(Task &task, int edit_choice, int user_input) {
    switch (edit_choice) {
        case 2:
            task.editPriority(user_input);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void DriverTask::editTaskDriver(Task &task, int edit_choice, double user_input) {
    switch (edit_choice) {
        case 5:
            task.editDuration(user_input);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}