#ifndef DEADLINE_SORT_TASK_HPP
#define DEADLINE_SORT_TASK_HPP

#include <string>
#include <vector>
#include "task.hpp"

using namespace std;

class DeadlineSortTask {
    public:
        DeadlineSortTask();
        ~DeadlineSortTask();
        void DeadlineSort(vector<Task>& taskList);
        
};

#endif