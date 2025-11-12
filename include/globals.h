#ifdef _WIN32
#include <direct.h>
#define MKDIR(path, mode) _mkdir(path)
#else
#include <sys/stat.h>
#include <sys/types.h>
#define MKDIR(path, mode) mkdir((path), (mode))
#endif