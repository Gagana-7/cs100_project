
# RANGBOT
 
 Authors: Arnav Subramanian, Nikhil Rao, Roman Javadyan, Gagana Warusawithana
Authors: <[Arnav Subramanian](https://github.com/asubr014)>, <[Nikhil Rao](https://github.com/nrao017)> ,<[Roman Javadyan](https://github.com/rjava005)>, <[Gagana Warusawithana](https://github.com/gwaru001)> 

## Description
 > * Importance

  > This project is interesting to us because a task manager is extremely important and useful in daily life. The task manager can be used to make sure notes and reminders are up to date for any assignments that may need to be completed through the quarter, semester, or even year. In this way we will be able to stay on track and finish any and all assignments while priding ourselves with great time managements skills to allow us to balance our quality of life. In this way we are also able to stay on track with time and work according to a clock which allows us to be more efficient in anything that we intend to accomplish, school or not. 


 > * Technology/tools/languages

  > In order to complete these assingments, we as a team are going to use github in order to stay up to date with our project and allow us to collaborate efficiently as group. We will also be using visual studios code in order to code our project efficiently. We will predomininantly be using C++ and Cmake in our code to start off however we could be adding other features which could require us to use other languages as well such as HTML or python. We will also have a database to store tasks. Finally, we will also be using the terminal in order to keep our code up to date with the whole team by pushing and pulling and changes that we have made to github in order to allow other team members to see progress as well. Finally, we will merge the files together to create our final project.


 > * Input/Output

> In order to create the task, the input would be the task the user is trying to complete and the output would be the task being sucessfully created. The inputs would also be the dates and times of the tasks, and what priority they hold for the user while the output would be setting the tasks in order based on their priority and time. 
> In order to remove or delete a task, the user would input the completion of the task and the output would be the removal of the task from the task board.
> In order to see the tasks need to be completed the user would input a command to see the task board and the output would be a notifications to the user informing them of their upcoming tasks, and a interface showcasing the tasks.
> In order to sort a task based on priority a user will indicate how they want the tasks sorted and the ouput would be the way the user chose to sort the tasks.


 > * Features

  > The project features such as storing and removing the tasks using the task manager and various commands. It will allow the user to set the tasks in a priority that the user chooses such as time, importance, etc. The user will be able to see all of the tasks which need to be completed in a display form as either a board view or notification system. The task will be formatted with the utmost importance given based on the user priority preference and chronoligical ordering of the tasks. Users will be able to input the name of the task, the level of prioirty, and due date of the task before officially creating the task.


 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification


### Navigation Diagram
<img width="856" alt="Screen Shot 2024-05-03 at 12 16 18 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/124764989/beacd7c0-ee09-45f2-a05e-f9573c31aefa">

### Screen Layouts
<img width="687" alt="Screenshot 2024-05-03 at 12 51 39 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/3ea0cd85-9c78-424d-8919-ca14d9877164">

<img width="696" alt="Screenshot 2024-05-03 at 12 52 25 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/a27be46d-ee24-4c1e-aa12-c14cc98a866f">


## Class Diagram (UML)

> <img width="536" alt="UMLdiagram" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165207121/99bc592a-fa19-41c3-a585-b4817e04a366">

> Description

> Class Task : parent class of the other classes that handles the task scheduler.
> 
> Private:
> * Name : a string variable that stores the name of the task.
> * Priority : an int variable that stores the importance level of a task, ranked from 1-5.
> * Deadline : a time_t variable, from the ctime library, that stores the due date of the task.
> * Description : a string type variable that stores an explanation of the task.
> * Label : a string type variable that allows for the classification of the task into a category.
> * Duration : a time_t variable, from the ctime library, that stores how long the task will take before being completed.
>   
> Public:
> * getName() : a string fuction that returns the name of a task.
> * setName(string) : a void fuction that lets the user name a task.
> * getPriority() : an int function that returns the priority of a task.
> * setPriority(int) : a void function that gives a task a priority level.
> * getLabel() : a string function that returns the classification of a task.
> * setLabel(string) : a void function that creates a classification for a task.
> * getDeadline() : a time_t function that returns the due date of a task.
> * setDeadline(time_t) : a void function that creates a deadline for a task.
> * getDescription() : a string function that returns the description of a task.
> * setDescription(string) : a void function that creates a description for a task.
> * getDuration() : a time_t function that returns the length it takes to do a task.
> * setDuration(time_t) : a void function that creates the duration of a task.
> * Vector \<string\> vector : a vector initalizer with a string type to store tasks.

> Class SubTask : a class that inherits from Task class, that allows for task lists that can hold smaller tasks.
> 
> Public:
> * createListTasks() : a vector with string type, that acts as a task but being a vector so that it can hold other tasks.

> Class Edit_Task : a class that inherits from Task class, that helps with creating, deleting, and editing parts of the task. It has the ability to keep calling itself to keep editing a task.
> 
> Public:
> * setTask(Name, Priority, Deadline, Description, Duration, Label) : a void function that creates the task with all the inputs from the user.
> * deleteTask(Name) : a void function that takes the Name of a task and removing it from the vector.
> * editName() : a void function that renames the task.
> * editPriority() : a void function that changes the priority level of the task.
> * editDeadline() : a void function that changes the due date of the task.
> * editDescription() : a void function that changes the description of the task.
> * editLabel() : a void function that changes the classification of the task.
> * editDuration() : a void function that changes how long a task will take to complete.

> Class Sort_Task : a class that inherits from Task class, that sorts the tasks in whatever order the user chooses so that it can be displayed.
> Public:
> * sortDeadline() : a void function that sorts the tasks in the vector according to how close their due date is.
> * sortPriority() : a void function that sorts the tasks in the vector accoridng to their importance level.

> Class Display_Task : a class that inherits from Sort_Task class, that uses the sorts from it to display the tasks in order requested by the user.
> 
> Public:
> * displayDeadline() : a void function that prints the tasks in the order of their due dates.
> * displayPriority() : a void function that prints the tasks in the order of their importance.
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
