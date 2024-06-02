#ifndef DRIVERTASK_HPP
#define DRIVERTASK_HPP

#include "task.hpp"
#include "createtask.hpp"
#include "editTask.hpp"
#include "deleteTask.hpp"
#include "display.hpp"

#include <iostream>
using namespace std;

class DriverTask {
    public:
        void editTaskDriver(Task &task, int choice, const string& user_choice);
        void editTaskDriver(Task &task, int choice, int user_choice);
        void editTaskDriver(Task &task, int choice, double user_choice);
        void deleteTaskDriver(const string &name, vector<Task> &taskList); 
        void deleteTaskDriver(vector<Task> &taskList);
};

#endif //DRIVERTASK_HPP