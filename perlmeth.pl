#!/usr/bin/perl

sub print_info {
my $self = shift;

print "This file is at ", $self->path, "\n";
}

$file->print_info;
