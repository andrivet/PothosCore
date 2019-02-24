#!/usr/bin/env bash

function pause() {
   read -p "$*"
}

if [ -d build ]; then
  rm -rf build
fi

mkdir build
pushd build

cmake .. \
  -Wno-dev \
  -DCMAKE_BUILD_TYPE=Debug \
  -DOPENSSL_ROOT_DIR=/usr/local/Cellar/openssl/1.0.2q \
  -DCMAKE_PREFIX_PATH=/usr/local/Cellar/qt/5.12.1 \
  -DPYTHON_EXECUTABLE=/usr/local/bin/python3 \
  -DENABLE_INTERNAL_POCO=TRUE \
  -DENABLE_INTERNAL_SPUCE=TRUE \
  -DENABLE_INTERNAL_MUPARSERX=TRUE
pause 'Press [Enter] key to continue...'

make
pause 'Press [Enter] key to continue...'

sudo make install
pause 'Press [Enter] key to continue...'

popd
