#! /bin/bash

hash="19e639b064bdb018bbf393d0f751e6e5e9934f70394531ab3f617513529ab264"


for i in {1111..9999}; do
  if test $(echo -n $i | sha256sum) = $"hash"; then
    echo $i
  fi

done;


