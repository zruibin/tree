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

#define _IFMT	    0170000	/* type of file */
#define _IFDIR	    0040000	/* directory */
#define _IFCHR	    0020000	/* character special */
#define _IFBLK	    0060000	/* block special */
#define _IFREG	    0100000	/* regular */
#define _IFLNK	    0120000	/* symbolic link */
#define _IFSOCK	    0140000	/* socket */
#define _IFIFO	    0010000	/* fifo */

#define	S_ISVTX     0001000	/* save swapped text even after use */
#define	S_ISUID		0004000	/* set user id on execution */
#define	S_ISGID		0002000	/* set group id on execution */
#define	S_IFLNK     _IFLNK
#define S_IFSOCK    _IFSOCK

#define lstat stat