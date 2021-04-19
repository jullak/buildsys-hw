# Задание 3. Кросс-компиляция

```bash
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX="/path/to/install" -D TOOLCHAIN_PATH="/path/to/arm-toolchain" ..
make install
```
Необходимые бинарники/библиотеки будут лежать по пути `${CMAKE_INSTALL_PREFIX}/bin` и `${CMAKE_INSTALL_PREFIX}/lib`
