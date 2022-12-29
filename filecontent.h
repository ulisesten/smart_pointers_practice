#ifndef __FILECONTENT_H__
#define __FILECONTENT_H__


#include <iostream>

class FileContent {
    std::string content;

public:
    FileContent(std::string content);
    std::string get_content();
    

};

#endif //__FILECONTENT_H__