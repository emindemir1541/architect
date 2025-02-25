//
// Created by Mr. Anderson on 25.02.2025.
//

#ifndef FILEUTIL_H
#define FILEUTIL_H
#include <cstdio>
#include <string>
#include <filesystem>


namespace fs = std::filesystem;

class FileUtil {
private:
public:
    static void createFile(const std::string &path) {
        FILE *file = fopen(path.c_str(), "w");
        fclose(file);
    }

    static void createFolder(const std::string &path) {
        fs::path folder{path};

        if (fs::exists(folder)) {
            return;
        }
        fs::create_directory(folder);
    }
};


#endif //FILEUTIL_H
