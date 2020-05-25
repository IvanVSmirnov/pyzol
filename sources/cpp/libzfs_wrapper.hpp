#ifndef _LIBZFS_WRAPPER_H_
#define	_LIBZFS_WRAPPER_H_

#include <pybind11/pybind11.h>
#include <libzfs/libzfs.h>
#include <iostream>

#ifdef	__cplusplus
extern "C" {
#endif

int test(void);


#ifdef	__cplusplus
}
#endif

#endif	/* _LIBZFS_WRAPPER_H_ */
