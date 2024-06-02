#ifndef DRIVERTASK_HPP
#define DRIVERTASK_HPP

#include "task.hpp"
#include "createtask.hpp"
#include "editTask.hpp"
#include "deleteTask.h"
#include "display.hpp"

#include <iostream>
using namespace std;

class DriverTask {
    public:
        void editTaskDriver(Task &task);
        
};

#endif //DRIVERTASK_HPP