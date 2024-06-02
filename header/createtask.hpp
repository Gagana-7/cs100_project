#ifndef CREATETASK_HPP
#define CREATETASK_HPP

#include <iostream>
#include "task.hpp"
using namespace std;

class CreateTask : public Task {
public:
    // Constructor
   CreateTask();

    //overloaded constructor
   void CreateTasks(const string &name, int priority, const string &deadline, const string &description, double duration, const string &label);


};

#endif //CREATETASK_CPP