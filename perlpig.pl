#!/usr/bin/perl

use Modern::Perl;
use autodie;


my $i = 'pig';

for ($i = 0; $i <= 10; $i += 2) {
say "$i * $i = ", $i * $i;
}

isnt $i, 'pig', '$i overwritten by a number';
