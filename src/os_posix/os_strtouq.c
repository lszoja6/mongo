/*-
 * Copyright (c) 2008-2012 WiredTiger, Inc.
 *	All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 */

#include "wt_internal.h"

#if !defined(HAVE_STRTOUQ)
/*
 * Convert a string to an unsigned quad integer.
 */
uint64_t
strtouq(const char *nptr, char **endptr, int base)
{
	STATIC_ASSERT(sizeof(uint64_t) == sizeof(unsigned long long));

	return (strtoull(nptr, endptr, base));
}
#endif
