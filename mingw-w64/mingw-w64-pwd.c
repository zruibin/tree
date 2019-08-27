#include <windows.h>
#include "../tree.h"

#define MAX_NAME 256

struct passwd *getpwuid (uid_t uid)
{
    char szUserName[MAX_NAME] = {0};
    unsigned long dwNameLen = sizeof(szUserName);
    GetUserName(szUserName, &dwNameLen);

    struct passwd *result = xmalloc(sizeof(struct passwd));
    result->pw_name = szUserName;
    result->pw_uid = uid;

    return result;
}