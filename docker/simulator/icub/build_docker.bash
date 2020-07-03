#!/usr/bin/env bash

docker build -t myicub_tdd -f ./Dockerfile ./ --network=host
