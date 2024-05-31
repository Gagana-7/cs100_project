#ifndef CREATETASK_HPP
#define CREATETASK_HPP

#include <iostream>
#include "task.hpp"
using namespace std;

class CreateTask : public Task {
public:
    // Constructor
   void createTask();

    //overloaded constructor
   void createTask(const string &deadline, int priority, double duration, const string &label, const string &name, const string &description);


};

#endif //CREATETASK_CPP