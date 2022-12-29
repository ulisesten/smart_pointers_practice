#include "file.h"

File::File(FileContent* fc, std::string ti){
    this->fileContent = fc;
    this->type_identifier = ti;
}

std::string File::get_type(){
    return type_identifier;
}

std::string File::get_content(){
    return fileContent->get_content();
}