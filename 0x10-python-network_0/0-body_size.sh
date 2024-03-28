#!/bin/bash
#Send a request to that URL, using GET method
curl -s "$1" | wc -c
