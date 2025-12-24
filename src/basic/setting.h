#ifndef _SVPCET_SETTING_H_
#define _SVPCET_SETTING_H_

#ifndef _SVPCET_COMMON_H_
#include "common.h"
#endif // !_SVPCET_COMMON_H_

namespace validator {
    namespace _setting {

    #ifdef ON_WINDOWS
        char _path_split = '\\';
        char _other_split = '/';
    #else
        char _path_split = '/';
        char _other_split = '\\';
    #endif // ON_WINDOWS


    };// namespace _setting
  
};// namespace validator

#endif // !_SVPCET_SETTING_H_
