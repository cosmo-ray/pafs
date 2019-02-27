# pafs
Preprocessor Automatic Format Strings

Small C Header only library that allow to automatically format strings,
and print in a similar way to iostream.

It seems it's even worst that using template in C++

trying to call AF_PRINT on my machine with gcc -Os take ~4GB of ram and more than 30secondes to compille

ok, ^ fix by using an intermediate function