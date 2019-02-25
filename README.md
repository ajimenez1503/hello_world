# hello_world
This repository is a hello_world to use different tools as CMake, Travis and CodeCoverage.

# Compile the application with CMake

```bash
    mkdir build
    cd build
    cmake -DCMAKE_BUILD_TYPE=Release|Debug ..
    cmake --build .
```

# Execute the application
```bash
    cd bin
    ./hello_world_c
    ./hello_world_cpp
    java -cp hello_world_java.jar hello_world_java
```