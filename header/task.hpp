#ifndef TASK_HPP
#define TASK_HPP

#include <string>
#include <vector>

class Task {
    private:
        bool completed;
        std::string name;
        int priority;
        std::string deadline;
        std::string description;
        std::string label;
        double duration;
        std::vector<std::string> taskList;
        
    public:

        //setters
        void setName(const std::string& name);
        void setPriority(int priority);
        void setDeadline(const std::string deadline);
        void setDescription(const std::string& description);
        void setLabel(const std::string& label);
        void setDuration(double duration);
        void addTask(const std::string& taskList);

        //getters
        std::string getName() const;
        int getPriority() const;
        std::string getDeadline() const;
        std::string getDescription() const;
        std::string getLabel() const;
        double getDuration() const;
        bool getCompleted() const;

};

#endif // TASK_HPP
