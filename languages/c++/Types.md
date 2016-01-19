C++ types
=========

A type describes "what" a piece of data represents.  Types allow the
program to model data so that it can be stored and understood by a computer.

In C++, there are two kinds of types.  On the one hand, you have primitives.
These are types like `int`, `float`, `char`, and various pointer types.  One
the other, you have what are known as "Abstract Data Types", sometimes known
as "user-defined types".  These include things like classes/structs/unions,
and are generally composed of primitive types.


Primitive Types
---------------

Primitive types are the basic building blocks of any data model.  They are
all representations of numbers, even `char` and pointers.

Whole numbers; `char`, `int`, `long`, pointer types.

Floating-point numbers: `float`, `double`

`char` is slightly special in that while it is essentially an 8-bit number,
it is typically used to represent the ANSI character set.  C, C++, and most
languages with a `char` or something similar provide character literals to
make working with these types much easier.  An unsigned `char` type is
commonly used by C and C++ programmers to represent a single byte.

The best way to think of a pointer is as an address.  A pointer variable is
essentially a number describing the offset of a segment of memory from
`0x0`, or `NULL`.  In other words, if a pointer contains the value
`0xFF8D48`, it is pointing to a position in memory `16747848` bytes from
`NULL`.

More recent versions of the C standard introduced fixed-width primitives,
which look something like `uint16_t` or `int64_t`.  If you need a value to
be exactly N bits, you should use the fixed-width primitive types.  While
this is usually not a problem, if you want your code to be more portable,
however, it is a better idea to make a note of the minium widths of the
various basic primitive data types, and selecting accordingly.

As an aside, when talking about "what is in the standard", it is usually a
good idea to check for yourself, and bearing in mind that the standards from
different years are not to be confused, and can differ greatly in certain
areas.  While the ISO charges for copies of the official standards, in
practice, you may use the final draft for a standard instead of the
official final release.


Abstract Data Types
-------------------

Abstract Data Types are a way for programmers to model the world in a
format that can be processed by computers.  Classes, structs, unions,
and many other composite constructs all fall under this category.

TBC


Pointers and Memory
-------------------

As noted in section on primitives, pointers are addresses in memory,
represented by whole numbers.  A pointer type must be wide enough to
address the memory of a system.  So when compiling for a 32-bit system,
you will get 32-bit pointers, for 64-bit systems, you will get 64-bit
pointers, and so on.

TBC

