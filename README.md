# cmake_practice

My hackmd note: [CMake Note](https://hackmd.io/c2bHFM66RvG6N-4yP8ouyA?view)


## Compile & Install

```
mkdir build && cd build
cmake ..
make
cmake --install .
```

編譯完成後，執行檔會位在
```
cmake_practice/build/cpp_exec/main
```

程式庫則位在
```
cmake_practice/build/cpp_lib/libcpp_lib.a
```

作為API的標頭檔則位在
```
cmake_practice/API/*.h
```