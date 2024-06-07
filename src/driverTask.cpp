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

void DriverTask::editTaskDriver(Task &task, int edit_choice) {
    editTask editor;
    switch(edit_choice) {
        case 7:
            editor.markAsComplete(task);
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
void DriverTask::createTaskDriver (const string &name, int priority, const string &deadline, const string &description, double duration, const string &label, vector<Task> &taskList){
        CreateTask createList;
        taskList.push_back(createList.CreateTasks(name, priority, deadline, description, duration, label));
}

void DriverTask::saveFileDriver(const string &fileName, const vector<Task> &taskList) {
    taskFile saveFile;
    saveFile.setFileName(fileName);
    saveFile.writeFile(taskList);
 }

void DriverTask::loadFileDriver(const string &fileName, vector<Task> &taskList) {
    taskFile loadFile;
    loadFile.setFileName(fileName);
    loadFile.readFile(taskList);
 }

void DriverTask::displayTasks(vector<Task> &taskList, int choice){
   TaskDisplay displaytasks;
   switch (choice){
       case 1:
           displaytasks.displayByPriority(taskList);
           break;
       case 2:
           displaytasks.displayByDeadline(taskList);
           break;
       default:
           cout << "Invalid choice" << endl;
           break;
       }
}

void DriverTask::displaySubtasks(vector<Task> &taskList, string label) {
    subTask subtask1;
    vector<Task> subtasks = subtask1.createListTasks(taskList, label);
    if (subtasks.empty()) {
        cout << "There are no subtasks with that label" << endl;
    } else {
        for (int i = 0; i < subtasks.size(); i++){
            cout << "Name: " << subtasks.at(i).getName() << endl;
            cout << "Priority: " << subtasks.at(i).getPriority() << endl;
            cout << "Deadline: " << subtasks.at(i).getDeadline() << endl;
            cout << "Description: " << subtasks.at(i).getDescription() << endl;
            cout << "Duration: " << subtasks.at(i).getDuration() << endl;
            cout << "Label: " << subtasks.at(i).getLabel() << endl;
            cout << "Is completed: " << subtasks.at(i).getCompleted() << endl;
            cout << endl;
        }
    }
    
}