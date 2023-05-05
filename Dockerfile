FROM ubuntu:18.04

RUN apt-get update && apt-get --assume-yes install make cmake g++-7 git ninja-build python3 zlib1g-dev

ENV CC=gcc-7
ENV CXX=g++-7

WORKDIR /app
