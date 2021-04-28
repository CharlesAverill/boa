rm -r bin
cmake . -B build
make -C build -j 8

bin/boa "$@"
