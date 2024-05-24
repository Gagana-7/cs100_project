#include "deleteTask.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


DeleteTask::DeleteTask() {
    //empty constructor
}

void DeleteTask::DeleteByName(vector<Task> &taskList, string name) {
    for (int i = 0; i < taskList.size(); i++) {
        if (taskList[i].getName() == name) {
            taskList.erase(taskList.begin() + i);
            i--;
        }
    }
}

void DeleteTask::DeleteWhenDone(vector<Task> &taskList) {
    for (int i = 0; i < taskList.size(); i++) {
        if (taskList[i].getCompleted()) {
            taskList.erase(taskList.begin() + i);
            i--;
        }
    }
}