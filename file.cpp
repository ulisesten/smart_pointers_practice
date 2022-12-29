#include "file.h"

File::File(std::string name, FileContent* fc, std::string ti){
    this->name = name;
    this->fileContent = fc;
    this->type_identifier = ti;
}

std::string File::get_type(){
    return type_identifier;
}

std::string File::get_name(){
    //std::cout << content << std::endl;
    return name;
}

void File::rename(std::string new_name){
    this->name = new_name;
}

std::string File::get_content(){
    return fileContent->get_content();
}

std::shared_ptr<File> File::get_ptr(){
    return shared_from_this();
}