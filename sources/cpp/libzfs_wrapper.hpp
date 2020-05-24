#ifndef _LIBZFS_WRAPPER_H_
#define	_LIBZFS_WRAPPER_H_

#include <pybind11/pybind11.h>
#include <libzfs/libzfs.h>

#ifdef	__cplusplus
extern "C" {
#endif

int test(char *message);

#ifdef	__cplusplus
}
#endif

#endif	/* _LIBZFS_WRAPPER_H_ */
