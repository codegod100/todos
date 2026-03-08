#!/bin/bash
set -e

# Build the docker image
docker build -t todos-arch -f Dockerfile.arch .

# Create a container to extract the binary
CONTAINER_ID=$(docker create todos-arch)
docker cp ${CONTAINER_ID}:/build/build_dir/todos ./todos-arch-bin
docker rm ${CONTAINER_ID}

echo "Binary extracted to ./todos-arch-bin"
