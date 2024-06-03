
#ifndef TASKDISPLAY_HPP
#define TASKDISPLAY_HPP
#include "task.hpp"
#include "PrioritysortTask.hpp"
#include "DeadlineSortTask.hpp"


class TaskDisplay {
    public:
        void displayByPriority(vector<Task> &tasksList) const;
        void displayByDeadline(vector<Task> &tasksList) const;

};
#endif // TASKDISPLAY_H
