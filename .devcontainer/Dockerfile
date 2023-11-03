FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y curl gnupg libacl1-dev libncurses5-dev cmake git && \
    curl -fsSL https://bazel.build/bazel-release.pub.gpg | gpg --dearmor > bazel.gpg && \
    mv bazel.gpg /etc/apt/trusted.gpg.d/ && \
    echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list && \
    apt-get update && \
    apt-get install -y bazel && \
    rm -rf /var/lib/apt/lists/*

RUN git clone https://github.com/eclipse-iceoryx/iceoryx.git && \
    cd iceoryx && \
    cmake -Bbuild -Hiceoryx_meta && \
    cmake -Bbuild -Hiceoryx_meta -DCMAKE_PREFIX_PATH=$(PWD)/build/dependencies/ && \
    cmake --build build && \
    cmake --build build --target install

