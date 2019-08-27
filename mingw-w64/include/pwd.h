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
#include "types.h"

struct passwd {
	char* pw_name;		/* user name */
	char* pw_passwd;		/* encrypted password */
	uid_t	pw_uid;			/* user uid */
	gid_t	pw_gid;			/* user gid */
	char* pw_comment;		/* comment */
	char* pw_gecos;		/* Honeywell login info */
	char* pw_dir;		/* home directory */
	char* pw_shell;		/* default shell */
};

struct passwd* getpwuid(uid_t);