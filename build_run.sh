rm -r bin
cmake . -B build
make -C build -j 8

clear

bin/boa "$@"
