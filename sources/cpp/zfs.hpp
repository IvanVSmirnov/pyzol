#ifndef _ZFS_HPP_
#define	_ZFS_HPP_

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

    private:
        libzfs_handle* handle = NULL;
};


#ifdef	__cplusplus
}
#endif


#endif	/* _ZFS_HPP_ */
