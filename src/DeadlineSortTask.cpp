#include "../header/DeadlineSortTask.hpp"
#include "../header/task.hpp"

DeadlineSortTask::DeadlineSortTask() {
    //empty
}

DeadlineSortTask::~DeadlineSortTask() {
    //empty
}


void DeadlineSortTask::DeadlineSort(vector<Task>& taskList) {
    int len = taskList.size();
    bool swapped;
    
    for (int i = 0; i < len - 1; i++) {
        swapped = false;
        
        for (int j = 0; j < len - 1 - i; j++) {
            string prev = taskList.at(j).getDeadline();
            string curr = taskList.at(j + 1).getDeadline();
            if (prev > curr) {
                swap(prev, curr);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (!swapped) {
            break;
        }
    }
}

