#include "audio.h"

Audio::Audio(std::string name, FileContent* fileContent, int duration): File(name, fileContent, "AUD") {

    this->duration = duration;
    
}

void Audio::update(){

}

double Audio::get_size(){
    /// 16 bits, 48000 Hz, 2 channels
    /// assume duration in miliseconds

    double seconds = duration /1000;
    return (((48000 * 16 * seconds) / 8)/ 1000000) * 2;

}