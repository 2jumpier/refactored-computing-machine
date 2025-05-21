#!/bin/bash
for f in *.txt; do
  echo -n "$f: "
  wc -l < "$f"
done
