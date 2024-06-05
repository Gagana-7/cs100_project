add_library(simpleLibrary
  createTask.cpp
  main.cpp 
  driverTask.cpp 
  task.cpp 
  editTask.cpp 
  deleteTask.cpp 
  createTask.cpp 
  taskFile.cpp 
  TaskDisplay.cpp 
  PrioritysortTask.cpp 
  DeadlineSortTask.cpp
)

find_library(M_SRC m)
target_link_libraries(simpleLibrary ${M_SRC})