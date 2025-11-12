<<<<<<< HEAD
#ifdef _WIN32
#include <direct.h>
#define MKDIR(path, mode) _mkdir(path)
#else
#include <sys/stat.h>
#include <sys/types.h>
#define MKDIR(path, mode) mkdir((path), (mode))
=======
#ifdef _WIN32
#include <direct.h>
#define MKDIR(path, mode) _mkdir(path)
#else
#include <sys/stat.h>
#include <sys/types.h>
#define MKDIR(path, mode) mkdir((path), (mode))
>>>>>>> f0fad5a5b45e146e47a56aeb1dc8dc9f2c1816aa
#endif