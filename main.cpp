#include <iostream>

#include "util/execute_util.cpp"
#include "util/FileUtil.h"
#include "util/Logger.h"

using namespace std;

int main() {
    /* int result = system("/bin/ls > /Users/neo/Desktop/output.txt");


     if (result == 0) {
         Logger::info("Working");
     }
     else {
         Logger::error("problem");
     }
     */

    ExecuteUtil::executeFile("hello.sh","/Users/neo/Desktop/hello.sh");

    return 0;
}
