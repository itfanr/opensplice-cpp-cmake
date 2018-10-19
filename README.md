# opensplice-cpp-cmake
Build a OpenSplice HelloWorld project with CMake 



## 1. 设置环境变量

**编译和运行都需要终端的环境变量！**

**环境变量很重要，必须首先设置！**

cd 到 x86_64.linux 目录，然后执行：

```
source release.com
```

查看环境变量：

```
itfanr@itfanr-pc:src$ echo $OSPL_HOME
your_dir/x86_64.linux
```



## 2.由IDL编译产生cpp的相关文件

cd 到src 目录，执行：

```
your_dir/x86_64.linux/bin/idlpp -l isocpp2 idl/HelloWorldData.idl 
```

CMakeLists等还有些问题，所以这一步只能手动编译了。囧



## 3.编译HelloWold工程

在src目录，执行：

```
 cmake . && make
```



## 4.最终的目录结构

```
itfanr@itfanr-pc:src$ tree
.
├── CMakeCache.txt
├── CMakeFiles
│   ├── 3.5.1
│   │   ├── CMakeCCompiler.cmake
│   │   ├── CMakeCXXCompiler.cmake
│   │   ├── CMakeDetermineCompilerABI_C.bin
│   │   ├── CMakeDetermineCompilerABI_CXX.bin
│   │   ├── CMakeSystem.cmake
│   │   ├── CompilerIdC
│   │   │   ├── a.out
│   │   │   └── CMakeCCompilerId.c
│   │   └── CompilerIdCXX
│   │       ├── a.out
│   │       └── CMakeCXXCompilerId.cpp
│   ├── cmake.check_cache
│   ├── CMakeDirectoryInformation.cmake
│   ├── CMakeOutput.log
│   ├── CMakeRuleHashes.txt
│   ├── CMakeTmp
│   ├── datamodel.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── CXX.includecache
│   │   ├── DependInfo.cmake
│   │   ├── depend.internal
│   │   ├── depend.make
│   │   ├── flags.make
│   │   ├── HelloWorldData.cpp.o
│   │   ├── HelloWorldDataSplDcps.cpp.o
│   │   ├── link.txt
│   │   └── progress.make
│   ├── feature_tests.bin
│   ├── feature_tests.c
│   ├── feature_tests.cxx
│   ├── Makefile2
│   ├── Makefile.cmake
│   ├── progress.marks
│   ├── TargetDirectories.txt
│   ├── ttpub.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── CXX.includecache
│   │   ├── DependInfo.cmake
│   │   ├── depend.internal
│   │   ├── depend.make
│   │   ├── flags.make
│   │   ├── implementation.cpp.o
│   │   ├── link.txt
│   │   ├── progress.make
│   │   └── publisher.cpp.o
│   └── ttsub.dir
│       ├── build.make
│       ├── cmake_clean.cmake
│       ├── CXX.includecache
│       ├── DependInfo.cmake
│       ├── depend.internal
│       ├── depend.make
│       ├── flags.make
│       ├── implementation.cpp.o
│       ├── link.txt
│       ├── progress.make
│       └── subscriber.cpp.o
├── cmake_install.cmake
├── CMakeLists.txt
├── common
│   ├── example_error_sac.h
│   ├── example_error_sacpp.hpp
│   ├── example_export.h
│   └── example_utilities.h
├── HelloWorldData.cpp
├── HelloWorldData_DCPS.hpp
├── HelloWorldData.h
├── HelloWorldDataSplDcps.cpp
├── HelloWorldDataSplDcps.h
├── idl
│   └── HelloWorldData.idl
├── implementation.cpp
├── implementation.hpp
├── libdatamodel.so
├── Makefile
├── ospl-info.log
├── publisher.cpp
├── subscriber.cpp
├── ttpub
└── ttsub

```



## 5.执行结果

1.第一个终端：

```
itfanr@itfanr-pc:src$ ./ttsub 
=== [Subscriber] message received :
    userID  : 1
    Message : "Hello World"

```

2.第二个终端：

```
itfanr@itfanr-pc:src$ ./ttpub 
=== [Publisher] writing a message containing :
    userID  : 1
    Message : "Hello World"

```



## 6.参考资料

1. https://github.com/ADLINK-IST/dds-tutorial-cpp-ex/
2. http://download.prismtech.com/docs/Vortex/apis/ospl/isocpp2/html
3. https://github.com/ADLINK-IST/opensplice/tree/master/examples/dcps/HelloWorld