#ifndef DRIVERTASK_HPP
#define DRIVERTASK_HPP

#include "task.hpp"
#include "createtask.hpp"
#include "editTask.hpp"
#include "deleteTask.hpp"
#include "TaskDisplay.hpp"
#include "taskFile.hpp"
#include "PrioritysortTask.hpp"
#include "DeadlineSortTask.hpp"

#include <iostream>
using namespace std;

class DriverTask {
    public:
        void editTaskDriver(Task &task, int choice, const string& user_choice);
        void editTaskDriver(Task &task, int choice, int user_choice);
        void editTaskDriver(Task &task, int choice, double user_choice);
        void deleteTaskDriver(const string &name, vector<Task> &taskList); 
        void deleteTaskDriver(vector<Task> &taskList);
        void createTaskDriver (const string &name, int priority, const string &deadline, const string &description, double duration, const string &label, vector<Task> &taskList);
        void saveFileDriver(const string &fileName, const vector<Task> &taskList);
        void loadFileDriver(const string &fileName, vector<Task> &taskList);
        void displayTasks(vector<Task> &taskList, int choice);
};

#endif //DRIVERTASK_HPP