#ifndef SUBTASK_HPP
#define SUBTASK_HPP

#include "task.hpp"
#include <vector>
using namespace std;

class subTask : Task {
    public: 
        vector<Task> createListTasks(vector<Task>& tasks, string label);
};


#endif