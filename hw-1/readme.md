# Задание 1. ТП
```bash
git submodule init
git submodule update
mkdir build
cd build
cmake ..
make
```

- Файл `index.h` в процессе сборки генерируется и кладется прямо в hw-1/A
- bin & lib создаются так же в hw-1
- gtest подтягивается через сабмодули
