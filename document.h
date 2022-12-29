#ifndef __DOCUMENT_H__
#define __DOCUMENT_H__

#include <iostream>
#include "file.h"

class Document: public File {
    

public:
    Document();

    /**
     * @return the number of non-whitespace characters
     * this is only present in document class
    */
    int get_character_count();

    int get_type() override;

    int get_size() override;

    /**equals the allocated content size*/
    size_t get_raw_size() override;

    void update() override;

};

#endif //__DOCUMENT_H__