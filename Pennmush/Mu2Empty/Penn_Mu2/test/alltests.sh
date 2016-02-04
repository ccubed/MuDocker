#!/bin/sh

export LC_COLLATE=C

exec /usr/bin/perl runtest.pl $@ test*.pl

