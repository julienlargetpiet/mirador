# mirador

Implementation of tree algorithm (file and dir search).

## Example

`see_all(path)`:

Void function that prints the files in the chosen directory and its sub-directories.

```
#include "mirador.h"

int main() {
  
  std::string path = ".";
  see_all(path);

  return 0;

}
```

**output:**

```
"./teste.cpp"
"./a.out"
"./c.txt"
"./mirador.h"
"./b.txt"
"./a.txt"
"./README.md"
"./mirador.h.gch"
"./teste_dir/oui.txt"
"./teste_dir2/a.txt"
"./.git/COMMIT_EDITMSG"
"./.git/HEAD"
"./.git/config"
"./.git/description"
"./.git/index"
"./teste_dir/teste_dirb/a.txt"
"./teste_dir/teste_dira/a.txt"
"./teste_dir/teste_dirc/a.txt"
"./teste_dir2/teste_dir2a/a.txt"
"./teste_dir2/teste_dir2c/a.txt"
"./teste_dir2/teste_dir2b/b.txt"
"./teste_dir2/teste_dir2b/a.txt"
```

`get_all(path)`

Get all files found inside a `std::vector<std::string>`


```
#include "mirador.h"

int main() {
  
  std::string path = ".";
  std::vector<std::string> out_vec = get_all(path);
  for (unsigned int i = 0; i < out_vec.size(); ++i) {
    std::cout << out_vec[i];
    std::cout << "\n";
  };

  return 0;

}
```

**output:**

```
./teste.cpp
./a.out
./c.txt
./mirador.h
./b.txt
./a.txt
./README.md
./mirador.h.gch
./teste_dir/oui.txt
./teste_dir2/a.txt
./.git/COMMIT_EDITMSG
./.git/HEAD
./.git/config
./.git/description
./.git/index
./teste_dir/teste_dirb/a.txt
./teste_dir/teste_dira/a.txt
./teste_dir/teste_dirc/a.txt
./teste_dir2/teste_dir2a/a.txt
./teste_dir2/teste_dir2c/a.txt
./teste_dir2/teste_dir2b/b.txt
./teste_dir2/teste_dir2b/a.txt
```



