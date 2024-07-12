### Dependencies

- [mp-units](https://github.com/mpusz/mp-units)
  - [gsl-lite](https://github.com/gsl-lite/gsl-lite)

### Installation

Make `gsl-lite` available to the project
(install using the package manager, 
[Vcpkg or an exported build directory](https://github.com/gsl-lite/gsl-lite/blob/master/README.md#installation-and-use),
in the last two cases, don't forget to add flags for cmake).

### Build
```
mkdir cmake-build && cd cmake-build
cmake ..
cmake --build ./
```