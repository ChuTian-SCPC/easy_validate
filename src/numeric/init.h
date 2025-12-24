#ifndef _SVPCET_INIT_H_
#define _SVPCET_INIT_H_

#ifndef _SVPCET_LOGGER_H_
#include "log/logger.h"
#endif // !_SVPCET_LOGGER_H_

namespace validate {
    namespace numeric {
        class _ValidateAutoReadEof {
        private:
            static bool _registered;

        public:
            static void _auto_read_eof() {
                if (testlibFinalizeGuard.readEofCount != 0) return;
                inf.readEof();
            }

            _ValidateAutoReadEof() {
                if (_registered) return;
                _registered = true;
                atexit(_auto_read_eof);
            }

            _ValidateAutoReadEof(const _ValidateAutoReadEof&) = delete;
            _ValidateAutoReadEof& operator=(const _ValidateAutoReadEof&) = delete;
        };
        bool _ValidateAutoReadEof::_registered = false;
        
        _ValidateAutoReadEof _validate_auto_read_eof;
    } // namespace numeric
} // namespace validate


#endif // !_SVPCET_INIT_H_
