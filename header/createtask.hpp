#include <iostream>
using namespace std;

#ifndef CREATETASK_HPP
#define CREATETASK_HPP

class CreateTask :: public Task {
public:
    // Constructor
   void createTask();

    //overloaded constructor
   void createTask(const string &deadline, int priority, double duration, const string &label, const string &name, const string &description);


};

#endif //CREATETASK_CPP