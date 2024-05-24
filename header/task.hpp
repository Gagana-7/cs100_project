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
        void setLabel(const std::string& label);
        void setDuration(double duration);
        void setCompleted(bool completed);
        void addTask(const Task& taskList);

        //getters
        string getName() const;
        int getPriority() const;
        string getDeadline() const;
        string getDescription() const;
        string getLabel() const;
        double getDuration() const;
        bool getCompleted() const;

};

#endif // TASK_HPP
