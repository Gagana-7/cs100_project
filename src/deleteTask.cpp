#include "deleteTask.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


DeleteTask::DeleteTask() {
    //empty constructor
}

void DeleteTask::DeleteByName(vector<Task> &taskList, string name) {
    //goes through list of tasks and deletes task by name
    for (int i = 0; i < taskList.size(); i++) {
        if (taskList[i].getName() == name) {
            taskList.erase(taskList.begin() + i);
            i--;
        }
    }
}

void DeleteTask::DeleteWhenDone(vector<Task> &taskList) {
    //goes through list of tasks and deletes task if completed
    for (int i = 0; i < taskList.size(); i++) {
        if (taskList[i].getCompleted()) {
            taskList.erase(taskList.begin() + i);
            i--;
        }
    }
}