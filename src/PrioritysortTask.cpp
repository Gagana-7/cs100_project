#include <iostream> 
using namespace std;
#include <vector>
#include <algorithm>
#include "../header/PrioritysortTask.hpp"
#include "../header/task.hpp"
#include "../header/createtask.hpp"

PrioritySortTask::PrioritySortTask(){
    //initialized class memebers
}

PrioritySortTask::~PrioritySortTask(){
    //deallocate memory to prevent memory leaks
}

void PrioritySortTask::sortbypriority(vector<Task> &taskList ){
    sort(taskList.begin(), taskList.end(), [] (const Task& lower, const Task &higher){
        return lower.getPriority() < higher.getPriority(); //returns minimum/most important priority to least important
    });
}
