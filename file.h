#ifndef __FILE_H__
#define __FILE_H__

#include <iostream>
#include <memory>
#include "filecontent.h"

/**
 * commons:
 *  filename
 *  FileContent (previous class)
 * 
*/


class File: public std::enable_shared_from_this<File> {
protected:
    std::string name;
    FileContent* fileContent;
    std::string type_identifier;

public:
    File(std::string name, FileContent* fc, std::string ti);
    std::string get_type();
    std::string get_name();
    void rename(std::string new_name);

    std::shared_ptr<File> get_ptr();

    std::string get_content();

    /** @return real allocated/used space in memory */
    virtual double get_size() = 0;


    //virtual int get_raw_size() = 0;

    
    virtual void update() = 0;

};

#endif // __FILE_H__