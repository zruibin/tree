#ifndef __u_long_defined
typedef unsigned long u_long;
#define __u_long_defined
#endif

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ __uint32_t;
#endif


#ifndef _UID_T_DECLARED
typedef	__UINT32_TYPE__		uid_t;		/* user id */
#define	_UID_T_DECLARED
#endif

#ifndef _GID_T_DECLARED
typedef	__UINT32_TYPE__		gid_t;		/* group id */
#define	_GID_T_DECLARED
#endif

#ifndef __u_short_defined
typedef	unsigned short	u_short;
#define __u_short_defined
#endif

#ifndef __u_int_defined
typedef	unsigned int	u_int;
#define __u_int_defined
#endif

#ifndef __u_char_defined
typedef	unsigned char	u_char;
#define __u_char_defined
#endif

typedef __SIZE_TYPE__ size_t;
//#undef ssize_t
//typedef __SIZE_TYPE__ ssize_t;

#ifndef _NL_ITEM_DECLARED
typedef int nl_item;
#define _NL_ITEM_DECLARED
#endif



