//
// Created by Mr. Anderson on 25.02.2025.
//

#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>

using namespace std;

class LevelColor {
public:
    // C++17 and later
    inline static const string BLACK = "\033[30m";
    inline static const string RED = "\033[31m";
    inline static const string GREEN = "\033[32m";
    inline static const string YELLOW = "\033[33m";
    inline static const string BLUE = "\033[34m";
    inline static const string PURPLE = "\033[35m";
    inline static const string CYAN = "\033[36m";
    inline static const string WHITE = "\033[37m";
};


class LevelItem {
public:
    const char *level;
    const string color;

    LevelItem(const char *level, string color)
        : level(level),
          color(color) {
    }

    static LevelItem ERROR() {
        return {"ERROR", LevelColor::RED};
    };

    static LevelItem WARNING() {
        return {"WARNING", LevelColor::YELLOW};
    };

    static LevelItem INFO() {
        return {"INFO", LevelColor::BLUE};
    };

    static LevelItem DEBUG() {
        return {"DEBUG", LevelColor::CYAN};
    };

    static LevelItem SUCCESS() {
        return {"SUCCESS", LevelColor::GREEN};
    };
};

class Logger {
public:
    static void log(const LevelItem &level, const char *message) {
        cout << level.color << "[" << level.level << "] " << "\033[0m" << message << endl;
    }
};


#endif //LOGGER_H
