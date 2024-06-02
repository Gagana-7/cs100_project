#ifndef TASKDISPLAY_H
#define TASKDISPLAY_H
#include "task.hpp"
#include "PrioritysortTask.hpp"
#include "deadlineSortTask.hpp"


class TaskDisplay : public Task {
    public:
        void displayByPriority(vector<Task> tasks) const;
        void displayByDeadline(vector<Task> tasks) const;

};
#endif // TASKDISPLAY_H
