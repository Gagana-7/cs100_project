#include "../header/DeadlineSortTask.hpp"
#include "../header/task.hpp"
#include <algorithm>

DeadlineSortTask::DeadlineSortTask() {
    //empty
}

DeadlineSortTask::~DeadlineSortTask() {
    //empty
}


void DeadlineSortTask::DeadlineSort(vector<Task>& taskList) {
        sort(taskList.begin(), taskList.end(), [](const Task &first, const Task &second) {
            return first.getDeadline() < second.getDeadline(); // Assumes deadlines can be compared as strings; adjust if necessary
        });
}

