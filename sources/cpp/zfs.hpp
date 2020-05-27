#ifndef _ZFS_HPP_
#define	_ZFS_HPP_

#include "pool.hpp"

#include <vector>
#include <string>

#include <libzfs/libzfs.h>


#ifdef	__cplusplus
extern "C" {
#endif


class ZFS {
    public:
        ZFS();
        ~ZFS();
        std::vector<std::string> pools(void);
        Pool get_pool(std::string name);

    private:
        libzfs_handle* handle = NULL;


        //std::vector<std::string> pool_list;
};

#ifdef	__cplusplus
}
#endif

#endif	/* _ZFS_HPP_ */
