#include "file_system.h"


void FileSystem::addFile(shared_ptr<File> ptrFile){
    files.push_back(ptrFile);
}


std::vector<shared_ptr<File>> FileSystem::getAtRange(int min, int max){

    std::vector<shared_ptr<File>> nvector;
    //min size 1500, max size 5000
    
    for (shared_ptr<File> file: files){
        if(file->get_size() > min && file->get_size() < max){
            nvector.push_back(file);
        }
    }
    
    return nvector;
}