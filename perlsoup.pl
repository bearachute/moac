#!/usr/bin/perl

use Modern::Perl;
use autodie;

my @meals = qw( soup sandwiches pizza);
say @meals;
push @meals, 'ice cream sundae';
say @meals;
