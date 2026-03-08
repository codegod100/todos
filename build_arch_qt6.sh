#!/bin/bash
set -e
docker build --pull=false -t todos-arch-qt6 -f Dockerfile.arch .
CONTAINER_ID=$(docker create todos-arch-qt6)
docker cp ${CONTAINER_ID}:/build/build_dir/todos ./todos-arch-qt6-bin
docker rm ${CONTAINER_ID}
echo "Binary extracted to ./todos-arch-qt6-bin"
