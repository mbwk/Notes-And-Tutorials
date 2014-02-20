C++ types
=========

C++ makes extensive use of primitive types.

This has the benefit of taking less memory to store information about,
but also means that you may have to deal with platform-specific differences.

Besides traditional types most programmers will be familiar with, C++ also
inherits a powerful but dangerous tool, called pointers.

The basics:
-----------
###int
most commonly used type to represent a number, good range and does
not take up much space.

###char
often used to store individual characters. can be used to store small
numbers.

###float/double
used to represent values between integers, i.e. numbers
with a decimal point in them

###bool
boolean. theoretically only needs 1 bit, but will usually use a whole
byte. see note on addressable memory

###unsigned/signed
signedness is whether number can have a sign, i.e +-. You need signed type to
represent negative numbers. If you use an unsigned type, you can not use
negative numbers, but in return the range of values you can use that are
above 0 will double.

Stuff about memory
------------------

Memory is addressable in blocks, the size of which depends on architecture.

Most commonly, the smallest block of memory that can be addressed is a byte
(i.e. 8 bits).

The amount of memory used up by your program depends on the interaction
between the CPU architecture and the types you use.


(lvalue) references
-------------------

every reference MUST be initialized refering to something. i.e. you can not
have null references.

a good way to think of references, is as an "alternative name for an object"

int ival = 1024; // ival is an int, to which we assign the value 1024
int &refVal = ival; // refVal refers to and int, which is ival.

there is not way to rebind a reference. one declared, the will refer to that
object from then on, and nothing else.

another way to think of references is as an "alias".

all operations on that reference are actually operations on the object to which
the reference is bound


section * pointers
------------------

pointers are a kind of composite data type. a pointer is a symbol that
literally POINTS to a location in memory. one analogy one can make to a
casual computer user is that a pointer is like a desktop shortcut.

The easiest way to remember how to read C-style pointer notation is to read
your variable declaration backwards. Some examples:

int * ptr;
<---------

ptr is a **pointer** to an **int**.

char ** argv;
<------------

argv is a **pointer** to a **pointer** to a **char** (ergo, argv is pointing
to the first **char**  in an array of chars)

note:

when not declaring a reference this notation: (&my_variable) can be taken to
mean "address of". do not assign an int to a pointer. You should assign the
**address** of the int to the pointer.


