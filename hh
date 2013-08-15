#!/bin/bash

echo "starting to watch your heroku apps..."

while true
do
  date
  FILENAME="hh.conf"
  cat $FILENAME | while read LINE
  do
    echo "hey ${LINE}"
    curl $LINE > /dev/null 2> /dev/null
  done
  sleep 1800
done