#!/usr/bin/perl

use Modern::Perl;
use autodie;

foreach (1 .. 10) {
say "$_ * $_ = ", $_ * $_;
}
