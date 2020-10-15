#! /bin/sh
find .  -type f -name "*.sh" -print | sed 's/.sh$//g' |  xargs -n 1 basename

