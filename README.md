
# Read Files

Read files from the console with a single command


## Installation

To install my project, firts clone it 

```bash
  git clone https://github.com/luisxsssx/read_files.git
  
  cd read_files
```
Compile the file with gcc

```bash
  gcc file.c -r read_file
```

To be able to read any text file form any path in Linux

```bash
  sudo mv read_file /usr/local/bin
```

Or you can also add the path to the project to the PATH

```bash
  export PATH="$PATH:/directory/path/to/executable/file"
```

And to read any file just use the command read_file followed by the file name

```bash
  read_file info.txt
```