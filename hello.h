#ifndef HELLO_H
#define HELLO_H

#ifdef HELLO_EXPORTS
#define HELLO_API __declspec(dllexport)
#else
#define HELLO_API __declspec(dllimport)
#endif

/* Returns the greeting. The string belongs to the DLL. */
HELLO_API const char *hello_world(void);

#endif
