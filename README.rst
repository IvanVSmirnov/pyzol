.. image:: https://travis-ci.com/IvanVSmirnov/pyzol.svg?branch=latest
    :target: https://travis-ci.com/IvanVSmirnov/pyzol

.. image:: https://badges.gitter.im/pyzol/community.svg
    :target: https://gitter.im/pyzol/community?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge


pyzol - python binding for ZFS on Linux
================================================================================


How to build
--------------------------------------------------------------------------------
Debian 10 (buster):
::

    # apt-get install libzfslinux-dev
    # git clone https://github.com/IvanVSmirnov/pyzol.git
    # cd pyzol
    # python setup.py build
    # python setup.py install
