const char* g_dcd_cflags = "-I../include/ -I../../3rdparty/openfst-src/include/ -Wno-sign-compare -Wno-dangling-else -Wno-deprecated-writable-strings -DOS_LINUX -O2 -std=c++0x -g -DMEMDEBUG  -I../../3rdparty/"; const char* g_dcd_lflags ="-ldl -L/home/dixonp/tools/opendcd/3rdparty/openfst-src/lib/ -L/home/dixonp/tools/opendcd/3rdparty/openfst-src/lib//fst -Wl,-rpath -Wl,/home/dixonp/tools/opendcd/3rdparty/openfst-src/lib/ -Wl,-rpath -Wl,/home/dixonp/tools/opendcd/3rdparty/openfst-src/lib//fst/ ";
