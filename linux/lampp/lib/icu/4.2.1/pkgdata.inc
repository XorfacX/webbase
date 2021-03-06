GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.42.1
COMPILE=gcc -D_REENTRANT  -O3 -I/opt/lampp/include/libpng -I/opt/lampp/include/ncurses -I/opt/lampp/include -L/opt/lampp/lib -Wl,--rpath -Wl,/opt/lampp/lib -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long  -c
LIBFLAGS=-I/opt/lampp/include -DPIC -fPIC
GENLIB=gcc -O3 -I/opt/lampp/include/libpng -I/opt/lampp/include/ncurses -I/opt/lampp/include -L/opt/lampp/lib -Wl,--rpath -Wl,/opt/lampp/lib -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long   -shared
LDICUDTFLAGS=-nodefaultlibs -nostdlib
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=ar
ARFLAGS=r
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
