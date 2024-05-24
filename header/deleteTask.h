#include "task.hpp"
#include <iostream>
using namespace std;

class DeleteTask: public Task {
    public:
        DeleteTask();
        void DeleteByName(vector<Task> &taskList, string name);
        void DeleteWhenDone(vector<Task> &taskList);
};
