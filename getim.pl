use strict;
use warnings;
use HTTP::Tiny;

my $url = 'http://i.imgur.com/4YCwgtW.jpg';
my $filename = 'dog.jpg';
#my $filename = sprintf "%s.jpg", time;

open my $out, '>', "$filename" or die "Unable to open $filename for writing.\n";
binmode $out;
print {$out} HTTP::Tiny->new->get($url)->{content};
print "Saved $filename\n"
