mkdir build
pushd "$PWD"
cd build
cmake .. -DCMAKE_BUILD_TYPE=DEBUG \
    -DCMAKE_VERBOSE_MAKEFILE=TRUE \
    -DVITA=ON \
    -DBUILD_SHARED_LIBS=OFF
popd