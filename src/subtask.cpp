#include "../header/subtask.hpp"

vector<Task> subTask::createListTasks(vector<Task>& tasks, string label) {
    vector<Task> subtask; 
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks.at(i).getLabel() == label) {
            subtask.push_back(tasks.at(i));
        }
    }

    return subtask;
}