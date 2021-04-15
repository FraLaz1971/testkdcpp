#!/usr/bin/env bash
. errvals
./testkdcpp "$1" "$2" "$3"
error_what $?
