#ifndef SUBTASK_HPP
#define SUBTASK_HPP

#include "task.hpp"

using namespace std;

class subTask : Task {
    vector<Task> createListTasks(vector<Task>& tasks, string label);
};


#endif