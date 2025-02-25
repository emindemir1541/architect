cmake_minimum_required(VERSION 3.30)
project(architect)

set(CMAKE_CXX_STANDARD 20)

add_executable(architect main.cpp
        util/logger.h
        ui/viewer.h
        util/vault.h
        util/FileUtil.h
        util/execute_util.cpp)
