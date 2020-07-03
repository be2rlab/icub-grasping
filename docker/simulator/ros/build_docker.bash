#!/usr/bin/env bash

docker build -t myros -f ./Dockerfile ./ --network=host
