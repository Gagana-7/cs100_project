#include <iostream>
using namespace std;

#include "../header/task.hpp"
#include "../header/createtask.hpp"

//created and initialized the constructor 
CreateTask::createTask(){
    name = "Unititled";
    label = "No label";
    description = "No description"
    priority = 0;
    duration = 0;
    completed = false; 
    deadline = "No deadline";
}

//initializing variables with parameters 
 CreateTask::createTask(const string &deadline, int priority, double duration, const string &label, const string &name, const string &description){
    this-> deadline  = deadline;
    this->priority = priority;
    this->duration = duration;
    this->label = label;
    this->name = name;
 }

