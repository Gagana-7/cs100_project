#ifndef EDITTASK_HPP
#define EDITTASK_HPP

#include "task.hpp"

using namespace std;

class editTask {
    public:
        void editName(Task& task, const string& name);
        void editPriority(Task& task, int priority);
        void editDeadline(Task& task, const string& deadline);
        void editDescription(Task& task, const string& description);
        void editDuration(Task& task, double duration);
        void editLabel(Task& task, const string& label);
        void markAsComplete(Task& task);
};

#endif // EDITTASK_HPP