#ifndef _SVPCET_ENUM_H_
#define _SVPCET_ENUM_H_

namespace validator {
    namespace _enum {
        enum class Color {
            Red,
            Green,
            Yellow,
            Grey,
            Reset,
            Default = Reset,
            MaxColor
        };
        constexpr int __color_index(Color color) {
            return static_cast<int>(color);
        }
    
    } // namespace _enum
} // namespace validator

#endif // !_SVPCET_ENUM_H_