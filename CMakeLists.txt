cmake_minimum_required(VERSION 3.20)





ADD_EXECUTABLE(event
  src/event.cpp
)









TARGET_COMPILE_DEFINITIONS(testMain PRIVATE gtest_disable_pthreads=ON)