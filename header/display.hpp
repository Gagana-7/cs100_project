#ifndef TASKDISPLAY_H
#define TASKDISPLAY_H
#include "../include/Task.h"
#include "../include/PrioritysortTask.h"
#include "../include/deadlineSortTask.h"


class TaskDisplay : public Task {
    public:
        void displayByPriority(vector<createTask> tasks) const;
        void displayByDeadline(vector<createTask> tasks) const;

};
#endif // TASKDISPLAY_H
