#ifndef _SVPCET_INCLUDE_ALL_H_
#define _SVPCET_INCLUDE_ALL_H_

#ifndef _SVPCET_COMMON_H_
#include "basic/common.h"
#endif // !_SVPCET_COMMON_H_
#ifndef _SVPCET_TOOLS_H_
#include "basic/tools.h"
#endif // !_SVPCET_TOOLS_H_
#ifndef _SVPCET_MACRO_H_
#include "basic/macro.h"
#endif // !_SVPCET_MACRO_H_
#ifndef _SVPCET_ENUM_H_
#include "basic/enum.h"
#endif // !_SVPCET_ENUM_H_
#ifndef _SVPCET_SETTING_H_
#include "basic/setting.h"
#endif // !_SVPCET_SETTING_H_

#ifndef _SVPCET_COLOR_H_
#include "log/color.h"
#endif // !_SVPCET_COLOR_H_
#ifndef _SVPCET_LOGGER_H_
#include "log/logger.h"
#endif // !_SVPCET_LOGGER_H_
#ifndef _SVPCET_PATH_H_
#include "log/path.h"
#endif // !_SVPCET_PATH_H_

#ifndef _SVPCET_INIT_H_
#include "numeric/init.h"
#endif // !_SVPCET_INIT_H_

namespace validate {
    namespace all {
        using namespace _msg;
        using namespace _enum;
        using namespace _setting;
        using namespace tools;
        using namespace numeric;
    } // namespace all
} // namespace validate

#ifdef _SVPCET_MACRO_H_
#undef _GET_VALUE_CONST
#undef _GET_VALUE_REF
#undef _GET_VALUE
#undef _SET_VALUE
#undef _SET_GET_VALUE
#endif // !_SVPCET_MACRO_H_

#endif // !_SVPCET_INCLUDE_ALL_H_
