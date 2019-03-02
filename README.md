[![Build Status](https://travis-ci.org/softwarejimenez/hello_world.svg?branch=master)](https://travis-ci.org/softwarejimenez/hello_world)
[![codecov](https://codecov.io/gh/softwarejimenez/hello_world/branch/master/graph/badge.svg)](https://codecov.io/gh/softwarejimenez/hello_world)

# hello_world
This repository is a hello_world to use different tools as CMake, Travis and CodeCoverage.

# Clone the repository

```bash
    git clone https://github.com/softwarejimenez/hello_world.git
    cd hello_world
```

# Compile the application with CMake

```bash
    mkdir -p build && cd build
    cmake -DCMAKE_BUILD_TYPE=Release|Debug <-DBUILD_C=ON|-DBUILD_CPP=ON|-DBUILD_JAVA=ON> <-DCODE_COVERAGE=ON> ..
    cmake --build . --config Release|Debug
```

# Execute the application
```bash
    cd bin
    ./hello_world_c<d>
    ./hello_world_cpp<d>
    java -cp hello_world_java.jar hello_world_java
```

```bash
    cd src/src_python
    python hello_world_python.py
```
