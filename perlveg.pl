#!/usr/bin/perl

use Modern::Perl;
use autodie;

my @meals;

# what's to eat pops?
push @meals, qw( hamburgers pizza lasagna turnip );

say @meals;

pop @meals;

say @meals;
