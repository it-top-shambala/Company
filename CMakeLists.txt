cmake_minimum_required(VERSION 3.25)
project(Company)

set(CMAKE_CXX_STANDARD 17)

add_executable(Company main.cpp variant_one/Person.h variant_one/Employee.h variant_one/Manager.h)
