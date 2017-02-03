# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    mapgen.pl                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelvill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/29 22:55:46 by imelvill          #+#    #+#              #
#    Updated: 2017/01/31 00:25:30 by imelvill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
    print "o";
}
else {
print "."; }
}
print "\n"; }
