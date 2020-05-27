#ifndef _POOL_HPP_
#define	_POOL_HPP_

#include <string>

#include <libzfs/libzfs.h>


#ifdef	__cplusplus
extern "C" {
#endif

class Pool {
    public:
        Pool();
        ~Pool();
        std::string property(std::string name);
};

#ifdef	__cplusplus
}
#endif

#endif	/* _POOL_HPP_ */
