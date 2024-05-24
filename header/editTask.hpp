#ifndef EDITTASK_HPP
#define EDITTASK_HPP

#include "task.hpp"

using namespace std;

class editTask {
    public:
        void editName(string name);
        void editPriority(int priority);
        void editDeadline(string deadline);
        void editDescription(string description);
        void editLabel(string label);
        void editDuration(double duration);

        void markAsComplete();
};

#endif // EDITTASK_HPP