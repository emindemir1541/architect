//
// Created by Mr. Anderson on 25.02.2025.
//

#ifndef VAULT_OPENER_H
#define VAULT_OPENER_H
#include <string>

#include "FileUtil.h"

class Vault {
};

using namespace std;

class Vault {
public:
    static Vault create(string path) {
        string vaultPath = path + "/.matrix";
        FileUtil::createFolder(vaultPath);
        return this;
    }

    void createDistro() {

    }

    static Vault open() {
        return this;
    }
};


#endif //VAULT_OPENER_H
