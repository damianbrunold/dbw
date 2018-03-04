# dbw
A textile design software primarily for dobby looms

For many years there existed the DB-WEAVE software. It is a software for designing patterns for dobby loom weaving. As this software
uses obsolete toolkit (C++Builder with VCL) and is not platform neutral, I decided to start a new project with the aim of recreating
the major functionality of DB-WEAVE, but this time in modern, standard C++ and using an established cross-platform GUI toolkit.

A first step is to design and implement the data structures representing the weave pattern. Then I will implement a file format (and
include reading of legacy DB-WEAVE files as well as potentially other formats, e.g. WIF). And finally, I will start to implement a
GUI.

The primary focus is in creating a self-contained, small desktop application that runs on Windows, Mac OS X and Linux.

Later on, it is quite possible that I try to add a mobile/tablet version of the GUI.

My motivation for this is two-folded: first, I want to explore and use modern C++. Secondly, I am always amazed, that the old DB-WEAVE,
created in 1995, is still being used. Maybe I can learn something about modern C++ while transforming DB-WEAVE to a modern basis, giving
it a new life.
