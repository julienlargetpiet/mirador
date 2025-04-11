# mirador

Implementation of tree algorithm (file and dir search).

## Example

**see_all**:

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



