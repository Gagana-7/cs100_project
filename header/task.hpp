#ifndef TASK_HPP
#define TASK_HPP

#include <string>
#include <vector>

using namespace std;

class Task {
    private:
        bool completed;
        string name;
        int priority;
        string deadline;
        string description;
        string label;
        double duration;
        vector<Task> taskList;
        
    public:

        //setters
        void setName(const std::string& name);
        void setPriority(int priority);
        void setDeadline(const std::string deadline);
        void setDescription(const std::string& description);
        void setDuration(double duration);
        void setLabel(const std::string& label);
        void setCompleted(bool completed);
        void addTask(const Task& taskList);

        //getters
        string getName() const;
        int getPriority() const;
        string getDeadline() const;
        string getDescription() const;
        double getDuration() const;
        string getLabel() const;
        bool getCompleted() const;

};

#endif // TASK_HPP
