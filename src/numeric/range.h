#ifndef _SVPCET_RANGE_H_
#define _SVPCET_RANGE_H_

#ifndef _SVPCET_COMMON_H_
#include "basic/common.h"
#endif // !_SVPCET_COMMON_H_

namespace validator {
    namespace numeric {

        template <typename T, typename = typename std::enable_if<std::is_integral<T>::value, T>::type>
        class Range {
        protected:
            T _min, _max;
        public:
            Range(T min, T max) : _min(min), _max(max) {}
        };

        template <typename T, typename = typename std::enable_if<std::is_floating_point<T>::value, T>::type>
        class Range {
        protected:
            T _min, _max;
            int _precision;
        public:
            Range(T min, T max, int precision = 6) : _min(min), _max(max), _precision(precision) {}
        };

    } // namespace numeric
} // namespace validator

#endif // _SVPCET_RANGE_H_
