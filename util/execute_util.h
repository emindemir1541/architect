//
// Created by Mr. Anderson on 25.02.2025.
//

#ifndef EXECUTER_H
#define EXECUTER_H
#include <cstdlib>
#include <string>
#include <__fwd/string.h>

#include "Logger.h"


class ExecuteUtil {
public:
    static void executeFile(const std::string &processName, const std::string &path) {
        try {
            int result = system(path.c_str());
            if (WIFEXITED(result)) {
                int exitCode = WEXITSTATUS(result);
                if (exitCode != 0) {
                    throw std::runtime_error("exit code: " + std::to_string(exitCode));
                }
            }
        } catch (exception &e) {
            Logger::error(processName, e.what());
        }
    }
};


#endif //EXECUTER_H
