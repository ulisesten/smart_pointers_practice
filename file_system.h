#ifndef __FILE_SYSTEM__H__
#define __FILE_SYSTEM__H__

#include <iostream>
#include <vector>
#include <memory>
#include "file.h"

using std::shared_ptr;

class FileSystem {
    std::vector<shared_ptr<File>> files;// Audio, Document

public:
    void addFile(shared_ptr<File> ptrFile);
    std::vector<shared_ptr<File>> getAtRange(int min, int max);
    bool renameFile(std::string old_name, std::string new_name);
};


#endif //__FILE_SYSTEM__H__