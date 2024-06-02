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
Task CreateTask::CreateTasks(const string &name, int priority, const string &deadline, const string &description, double duration, const string &label) {
    Task newTask;
    newTask.setName(name);
    newTask.setPriority(priority);
    newTask.setDeadline(deadline);
    newTask.setDescription(description);
    newTask.setDuration(duration);
    newTask.setLabel(label);
    newTask.setCompleted(false);
    return newTask;
}

