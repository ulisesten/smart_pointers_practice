#ifndef __AUDIO_H__
#define __AUDIO_H__

#include "file.h"

/**
 * Id AUD 
 * We assume 16 bit samples at a rate of 48000 Hz, for two channels*/

class Audio: public File {
    int duration;
    //fileContent inherited
    //type_identifier inherited

public:
    Audio(std::string name, FileContent* fileContent, int duration);
    double get_size() override;
    void update() override;
};

#endif //__AUDIO_H__