#ifndef DEADLINE_SORT_TASK_HPP
#define DEADLINE_SORT_TASK_HPP

#include <string>
#include <vector>
#include "task.hpp"

using namespace std;

class deadlineSortTask {
    public:
        deadlineSortTask();
        void deadlineSort(vector<Task>& taskList);
        ~deadlineSortTask();
};

#endif