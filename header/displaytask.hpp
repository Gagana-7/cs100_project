#include "task.hpp"
#include <iostream>
using namespace std;

class DisplayTask {
    public:
        DisplayTask();
        ~DisplayTask();
        void DisplayByPriority();
        void DisplayByDeadline();
}; 