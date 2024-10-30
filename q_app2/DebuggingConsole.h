//
// Created on 2023/01/06
//

#ifndef DEBUGGINGCONSOLE_H
#define DEBUGGINGCONSOLE_H

#if WIN32

#include <Windows.h>

// DEBUGGING 
inline void attachDebugConsole()
{
#if _DEBUG
    if ( ::GetStdHandle( STD_OUTPUT_HANDLE ) == NULL ) {
        // these next few lines create and attach a console
        // to this process.  note that each process is only allowed one console.
        AllocConsole();
        AttachConsole( GetCurrentProcessId() );
        freopen( "CON", "w", stdout );
        freopen( "CON", "w", stderr );
        freopen( "CON", "r+", stdin );

        // Prevent killing the whole app by closing the console 
        SetConsoleCtrlHandler( NULL, true );
        HWND hwnd = ::GetConsoleWindow();
        if ( hwnd != NULL )
        {
            HMENU hMenu = ::GetSystemMenu( hwnd, FALSE );
            if ( hMenu != NULL ) DeleteMenu( hMenu, SC_CLOSE, MF_BYCOMMAND );
        }

        SetConsoleCP( CP_UTF8 );
        SetConsoleOutputCP( CP_UTF8 );

        printf( "DEBUGGING console output. Actual CP-%d, Console CP-%d\n", GetACP(), GetConsoleOutputCP() );
    }
#endif
}
#else

inline void attachDebugConsole() {};

#endif // WIN32

#if _DEBUG
#   define CONSOLE(x) do { std::cout << __func__ << ":" << x << '\n';  } while(0)
#else
#   define CONSOLE(x)
#endif

#define STATUS(x) do { \
    std::ostringstream ss; \
    ss << x; \
    CONSOLE ( ss.str() ); \
    GM_LOG_MSG_DIRECT(GM_Log_Status, ss.str().c_str()); \
} while(0)

#endif // DEBUGGINGCONSOLE_H
