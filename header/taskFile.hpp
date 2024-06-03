#ifndef TASKFILE_CPP
#define TASKFILE_CPP

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "task.hpp"
using namespace std;

class taskFile {
    private:
        string fileName;
    public: 
        void setFileName(string name);
        void writeFile(const vector<Task>& tasks);
        void readFile(vector<Task>& tasks);
        
};

#endif //TASKFILE_CPP