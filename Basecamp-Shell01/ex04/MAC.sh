#!/bin/sh

ifconfig -a | grep ether | sed 's/ *ether \(.*\)/\1/'