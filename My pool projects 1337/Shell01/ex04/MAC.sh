#!/bin/bash
ifconfig -a | grep -w  ether | awk '{print $2}'
