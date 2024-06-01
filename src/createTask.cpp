#include <iostream>
using namespace std;

#include "../header/task.hpp"
#include "../header/createtask.hpp"

//created and initialized the constructor 
CreateTask::createTask(){
    name = "Unititled";
    priority = 0;
    deadline = "No deadline";
    description = "No description"
    duration = 0;
    label = "No label";
    completed = false; 
}

//initializing variables with parameters 
 CreateTask::createTask(const string &name, int priority, const string &deadline, const string &description, double duration, const string &label, ){
    this->name = name;
    this->priority = priority;
    this-> deadline  = deadline;
    this->description = description;
    this->duration = duration;
    this->label = label;
    this->completed = false
    
 }

