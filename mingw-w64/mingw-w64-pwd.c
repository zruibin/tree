/*
$Copyright: $
 * Copyright (c) 2019 by Efrey Kong (efreykong@outlook.com)
 * All Rights reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
*/
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