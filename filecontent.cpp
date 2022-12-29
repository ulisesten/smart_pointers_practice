#include "filecontent.h"


FileContent::FileContent(std::string cnt){
    this->content = cnt;
}

std::string FileContent::get_content(){
    //std::cout << content << std::endl;
    return content;
}