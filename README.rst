.. image:: https://travis-ci.com/IvanVSmirnov/pyzol.svg?branch=latest
    :target: https://travis-ci.com/IvanVSmirnov/pyzol

.. image:: https://readthedocs.org/projects/pyzol/badge/?version=latest
    :target: https://pyzol.readthedocs.io/en/latest/?badge=latest
    
.. image:: https://badges.gitter.im/pyzol/community.svg
    :target: https://gitter.im/pyzol/community?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge


pyzol - python binding for ZFS on Linux
********************************************************************************

Install binary package
--------------------------------------------------------------------------------
Pre-compiled binary package available for linux x86-64:
::

    # pip install pyzol


Build from sources
--------------------------------------------------------------------------------
If you want to compile pyzol for another platform (freebsd or macosx) you should have installed:

* Package with zfs headers
* C++11 compiler


For example, Debian 10 "buster" or Ubuntu 20.04 "focal fossa":
::

    # apt-get install libzfslinux-dev build-essential
    # git clone https://github.com/IvanVSmirnov/pyzol.git
    # cd pyzol
    # python setup.py build
    # python setup.py install

