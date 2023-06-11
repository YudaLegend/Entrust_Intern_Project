# Entrust_Intern_Project
This is a simple paging application implemented in C++. It takes input from a file, paginates the text according to specified rules, and outputs the paginated text.

## Requirements
C++ compiler (e.g., g++)
Input file containing the text to be paginated

## Getting Started
1.Clone the repository or download the source code files.

2.Make sure you have a C++ compiler installed on your system.

3.Create a file named "document.txt" in the same directory as the source code file. The "document.txt" file should contain the text you want to paginate.

4.Compile the code using the following command:

```
g++ entrust1.cpp -o program
```

5.Run the compiled program:
```
./program
```

6.The paginated text will be displayed on the console.

## Customization

If you want to use a different input file, make sure to update the filename in the code (std::ifstream inputFile("document.txt")).

You can modify the maximum number of characters per line (80) and the number of lines per page (25) by changing the respective variables in the code.

## Example
Suppose the input file "document.txt" contains the following text:

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin a lorem euismod, tincidunt ipsum vitae, eleifend lorem. Nulla facilisi. Sed aliquet dapibus sem, eget commodo mi feugiat non. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae.

Running the program will produce the following paginated output:
```
[Page 0]
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin a lorem euismod, 
tincidunt ipsum vitae, eleifend lorem. Nulla facilisi. Sed aliquet dapibus sem, 
eget commodo mi feugiat non. Vestibulum ante ipsum primis in faucibus orci 
luctus et ultrices posuere cubilia Curae.
```

