use 5.010; # so we can use say()

# assign array refs
@AoA = (
[ "fred", "barney", "pebbles", "bambam", "dino", ],
["george", "jane", "elroy", "judy",],
["homer", "bart", "marge", "maggie",],
);

say $AoA[2][1];
