#ifndef PRIORITY_HPP
#define PRIORITY_HPP

#include <iostream> 
#include <vector>
#include <algorithm>
#include "task.hpp"
using namespace std;

class PrioritySortTask {

private:
public:
    PrioritySortTask(); //constructor
    ~PrioritySortTask(); //destructor
    bool comparePriorities(const Task &lower, const Task &higher);
    void sortbypriority(vector<Task> &taskList);

}; 
#endif 