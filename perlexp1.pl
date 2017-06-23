#!/usr/bin/perl

use Modern::Perl;
use autodie;

$_ = 'My name is Paquito';
say if /My name is/;

s/Paquito/Paquita/;

tr/A-Z/a-z/;
say;
