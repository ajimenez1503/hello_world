# hello_world
This repository is a hello_world to use different tools as CMake, Travis and CodeCoverage.

# Compile the application with CMake

```bash
    mkdir build
    cd build
    cmake -DCMAKE_BUILD_TYPE=Release|Debug -DBUILD_SHARED_LIBS=ON|OFF ..
    cmake --build .
```

# Execute the application
```bash
    cd build
    ./hello_world
```