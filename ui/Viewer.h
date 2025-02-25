//
// Created by Mr. Anderson on 25.02.2025.
//

#ifndef VIEWER_H
#define VIEWER_H
#include <iostream>
#include <string>


using namespace std;

class Viewer {
private:
    static void listItem(const int no, const string &content) {
        cout << no << ". " << content << endl;
    }

public:
    static void showMenu() {
    }
};


#endif //VIEWER_H
