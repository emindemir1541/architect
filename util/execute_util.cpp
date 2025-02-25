//
// Created by Mr. Anderson on 25.02.2025.
//

#include "Logger.h"
#ifndef EXECUTER_H

#include <cstdlib>
#include <string>
#include <utility>
#include <__fwd/string.h>


using namespace std;

enum ProcessSituation {
    SUCCESS,
    FAIL,
    WAITING
};

class ProcessNode {
public:
    const int id;
    const string processName;
    const string path;
    const bool exitIfFail;
    const ProcessSituation situation;


    ProcessNode(const int id, string process_name, string path, const bool exit_if_fail, ProcessSituation situation)
        : id(id),
          processName(std::move(process_name)),
          path(std::move(path)),
          exitIfFail(exit_if_fail),
          situation(situation) {
    }
};

class ExecuteUtil {
public:
    static void executeFile(const std::string &processName, const std::string &path) {
        int result = system(path.c_str());
        if (WIFEXITED(result)) {
            int exitCode = WEXITSTATUS(result);
            if (exitCode != 0) {
                throw std::runtime_error("exit code: " + std::to_string(exitCode));
            }
        }
    }

};


#endif //EXECUTER_H
