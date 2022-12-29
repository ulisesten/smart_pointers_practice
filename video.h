#ifndef __VIDEO_H__
#define __VIDEO_H__
/** Id VID
 * 
 * formula raw_size calculation
 * 3 * resolutionX * resolutionY * to_int(30 * duration)
*/
class Video {
    int resolutionX;
    int resolutionY;
    int duration;

};

#endif //__VIDEO_H__