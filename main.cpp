#include <iostream>
#include <memory>

#include "audio.h"
#include "file_system.h"

int main(){
    FileSystem fileSystem;
    FileContent fc("This is the file content");

    //Audio
    //shared_ptr<> 
    std::shared_ptr<File> audio = std::make_shared<Audio>(&fc, 60000);

    fileSystem.addFile(move(audio));

    std::vector<shared_ptr<File>> atRangeFiles = fileSystem.getAtRange(11, 12);
    for (shared_ptr<File> file: atRangeFiles){
        std::cout << file->get_size() << std::endl;
    }
    

    //std::cout << audio->get_size() << std::endl;

    return 0;
}