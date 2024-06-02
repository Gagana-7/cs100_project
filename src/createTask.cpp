#include <iostream>
using namespace std;

#include "../header/task.hpp"
#include "../header/createtask.hpp"

//created and initialized the constructor 
CreateTask::CreateTask(){
    setName("Unititled");
    setPriority(0);
    setDeadline("No deadline");
    setDescription("No description");
    setDuration(0);
    setLabel("No label");
    setCompleted(false);
}

//initializing variables with parameters 
void CreateTask::CreateTasks(const string &name, int priority, const string &deadline, const string &description, double duration, const string &label) {
    setName(name);
    setPriority(priority);
    setDeadline(deadline);
    setDescription(description);
    setDuration(duration);
    setLabel(label);
    setCompleted(false);
}

