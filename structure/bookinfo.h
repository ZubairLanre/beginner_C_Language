// The following program defines an array of three structure variables using a 
// bookInfo structure tag
// shown that is defined in the bookInfo.h header file presented first. 
//  user is asked to fill the
// structure variables, and then the program prints them. 
// In the next couple chapters, you’ll see how to
// output the structure variables to a disk file for long-term storage.
// The first file is the header file containing the structure definition:

// This header file defines a structure for information about a book
struct bookInfo {
    char title[40];
    char author[25];
    float price;
    int pages;
};