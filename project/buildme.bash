#!/usr/bin/env bash
cd ./build && rm -rf ./* && cmake ../ && make -j8 && cd ../ && ./build/bin/demo_day_july
