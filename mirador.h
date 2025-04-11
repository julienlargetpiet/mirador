#include <iostream>
#include <fstream>
#include <filesystem>
#include <deque>

void see_all(std::string &path) {
  std::string cur_path;
  std::string cur_path_dir_found;
  std::deque<std::string> vec_dirname = {path};
  int n = 0;
  while (n > -1) {
    cur_path = vec_dirname[n];
    for (const auto &entry : std::filesystem::directory_iterator(cur_path)) {
      if (entry.is_directory()) {
        cur_path_dir_found = entry.path();
        vec_dirname.push_front(cur_path_dir_found);
        n += 1;
      } else {
        std::cout << entry.path() << "\n";
      };
    };
  vec_dirname.pop_back();
  n -= 1;
  };
};


